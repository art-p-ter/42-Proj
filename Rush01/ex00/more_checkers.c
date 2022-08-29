/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_checkers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:31:37 by aterente          #+#    #+#             */
/*   Updated: 2022/08/21 23:31:45 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

int	check_box_already_exists(int board[4][4], int position, int size)
{
	int	i;

	i = 0;
	while (i < position / 4)
	{
		if (board[i][position % 4] == size)
		{
			return (1);
		}
		i++;
	}
	i = 0;
	while (i < position % 4)
	{
		if (board[position / 4][i] == size)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_args(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (1);
	if (ft_strlen(argv[1]) != 31)
		return (1);
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (1);
		}
		else
		{
			if (argv[1][i] != ' ')
				return (1);
		}
		i++;
	}
	return (0);
}
