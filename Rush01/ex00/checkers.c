/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:31:14 by aterente          #+#    #+#             */
/*   Updated: 2022/08/21 23:31:45 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_colup(int board[4][4], int position, int visibilities[16])
{
	int	i;
	int	max;
	int	visible_boxes;

	i = 0;
	max = 0;
	visible_boxes = 0;
	if (position / 4 == 3)
	{
		while (i < 4)
		{
			if (board[i][position % 4] > max)
			{
				max = board[i][position % 4];
				visible_boxes++;
			}
			i++;
		}
		if (visibilities[position % 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_coldown(int board[4][4], int position, int visibilities[16])
{
	int	i;
	int	max;
	int	visible_boxes;

	i = 3;
	max = 0;
	visible_boxes = 0;
	if (position / 4 == 3)
	{
		while (i >= 0)
		{
			if (board[i][position % 4] > max)
			{
				max = board[i][position % 4];
				visible_boxes++;
			}
			i--;
		}
		if (visibilities[4 + position % 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_rowleft(int board[4][4], int position, int visibilities[16])
{
	int	i;
	int	max;
	int	visible_boxes;

	i = 0;
	max = 0;
	visible_boxes = 0;
	if (position % 4 == 3)
	{
		while (i < 4)
		{
			if (board[position / 4][i] > max)
			{
				max = board[position / 4][i];
				visible_boxes++;
			}
			i++;
		}
		if (visibilities[8 + position / 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_rowright(int board[4][4], int position, int visibilities[16])
{
	int	i;
	int	max_size;
	int	visible_boxes;

	i = 3;
	max_size = 0;
	visible_boxes = 0;
	if (position % 4 == 3)
	{
		while (i >= 0)
		{
			if (board[position / 4][i] > max_size)
			{
				max_size = board[position / 4][i];
				visible_boxes++;
			}
			i--;
		}
		if (visibilities[12 + position / 4] != visible_boxes)
			return (1);
	}
	return (0);
}

int	check_all(int board[4][4], int position, int visibilities[16])
{
	if (check_rowleft(board, position, visibilities) == 1)
		return (1);
	if (check_rowright(board, position, visibilities) == 1)
		return (1);
	if (check_coldown(board, position, visibilities) == 1)
		return (1);
	if (check_colup(board, position, visibilities) == 1)
		return (1);
	return (0);
}
