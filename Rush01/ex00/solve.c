/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:31:40 by aterente          #+#    #+#             */
/*   Updated: 2022/08/21 23:31:45 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_all(int board[4][4], int position, int visibilities[16]);
int		check_box_already_exists(int board[4][4], int position, int size);

int	solve_board(int board[4][4], int visibilities[16], int position)
{
	int	box_size;

	if (position == 16)
		return (1);
	box_size = 1;
	while (box_size <= 4)
	{
		if (check_box_already_exists(board, position, box_size) == 0)
		{
			board[position / 4][position % 4] = box_size;
			if (check_all(board, position, visibilities) == 0)
			{
				if (solve_board(board, visibilities, position + 1) == 1)
					return (1);
			}
			else
				board[position / 4][position % 4] = 0;
		}
		box_size++;
	}
	return (0);
}
