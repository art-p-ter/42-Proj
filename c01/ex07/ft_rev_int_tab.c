/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:22:13 by aterente          #+#    #+#             */
/*   Updated: 2022/08/29 13:51:39 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	arr_buff;

	i = 0;
	while (i + 1 <= size / 2)
	{
		arr_buff = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = arr_buff;
		i++;
	}
}
