/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:31:33 by aterente          #+#    #+#             */
/*   Updated: 2022/08/21 23:31:45 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);
void	print_solution(int board[4][4]);
void	save_argv_values(int *visibilities, char *str);
int		check_args(int argc, char **argv);
int		solve_board(int board[4][4], int visibilities[16], int position);

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	*visibilities;

	if (check_args(argc, argv) == 1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	visibilities = malloc (sizeof(int) * 16);
	save_argv_values(visibilities, argv[1]);
	if (solve_board(board, visibilities, 0) == 1)
		print_solution(board);
	else
		ft_putstr("Error\n");
	free(visibilities);
	return (0);
}
