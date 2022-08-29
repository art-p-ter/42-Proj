/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:55:09 by aterente          #+#    #+#             */
/*   Updated: 2022/08/13 15:51:03 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnum(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_printnum(a / 10);
			ft_printnum(a % 10);
			write(1, " ", 1);
			ft_printnum(b / 10);
			ft_printnum(b % 10);
			if (a < 98 || b < 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
