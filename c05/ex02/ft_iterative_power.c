/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 13:27:36 by aterente          #+#    #+#             */
/*   Updated: 2022/08/27 14:28:42 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
	if (power == 0)
        nb = 1;
		return (nb);
	if (power == 1)
		return (nb);
	while (power != 0)
	{
		res = nb * res;
		power--;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(2, 4));
	return (0);
}
