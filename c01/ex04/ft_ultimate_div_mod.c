/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:35:41 by aterente          #+#    #+#             */
/*   Updated: 2022/08/15 12:43:22 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buff_pa;
	int	buff_pb;

	buff_pa = *a;
	buff_pb = *b;
	*a = buff_pa / buff_pb;
	*b = buff_pa % buff_pb;
}
