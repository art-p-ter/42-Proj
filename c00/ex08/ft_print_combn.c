/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:39:18 by aterente          #+#    #+#             */
/*   Updated: 2022/08/29 14:45:13 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_number(int nbr)
{
	int	n;
	int	f;
	int	s;

	n = nbr;
	f = (n / 10) % 10;
	s = n % 10;
	while ((n / 10) != 0)
	{
		if (f >= s)
			return (0);
		else
		{
			n = n / 10;
			f = (n / 10) % 10;
			s = n % 10;
		}
	}
	return (1);
}

long int	ft_ten_power(int pow)
{
	long int	count;

	count = 10;
	while (pow > 1)
	{
		count = count * 10;
		pow--;
	}
	if (pow == 0)
		count = 1;
	return (count);
}

void	ft_print_num(int nbr, int digits)
{
	int	d;
	int	i;

	i = digits - 1;
	while (i >= 0)
	{
		d = ((nbr / ft_ten_power(i)) % 10) + '0';
		write(1, &d, 1);
		i--;
	}
}

void	ft_print_combn(int n)
{
	int	nbr;
	int	specimen;

	specimen = 123456789;
	nbr = specimen / ft_ten_power(9 - (n - 1));
	while (nbr <= (specimen % ft_ten_power(n)))
	{
		if (ft_is_number(nbr))
		{
			ft_print_num(nbr, n);
			if ((nbr / ft_ten_power(n - 1)) != (10 - n))
				write(1, ", ", 2);
			else
				break ;
			nbr++;
		}
		else
			nbr++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
