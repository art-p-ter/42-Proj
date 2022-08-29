/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joramire <joramire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:43:06 by joramire          #+#    #+#             */
/*   Updated: 2022/08/13 20:47:14 by joramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	pattern(int x, char init, char middle, char end)
{	
	int	colum;

	colum = 1;
	ft_putchar(init);
	colum++;
	while (colum <= (x - 1))
	{
		ft_putchar(middle);
		colum++;
	}
	if (x != 1)
	{
		ft_putchar(end);
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{	
	int	row;

	row = 1;
	while (row <= y)
	{
		if (row == 1 || row == y)
		{
			if (row == 1)
				pattern(x, 'A', 'B', 'C');
			else
				pattern(x, 'C', 'B', 'A');
			row++;
		}
		else
		{
			pattern(x, 'B', ' ', 'B');
			row++;
		}
	}
}
