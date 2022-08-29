/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:39:38 by aterente          #+#    #+#             */
/*   Updated: 2022/08/13 11:30:41 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char i, char j, char k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	else
	{
		if (i < j && j < k)
		{
			ft_putchar(i);
			ft_putchar(j);
			ft_putchar(k);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = '1';
		while (j <= '8')
		{
			k = '2';
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			k = j++;
		}
		j = i++;
	}
}

int main ()
{
	ft_print_comb();
	return 0;
}