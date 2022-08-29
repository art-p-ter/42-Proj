/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:56:27 by aterente          #+#    #+#             */
/*   Updated: 2022/08/17 15:26:54 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_num_check(char c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!ft_num_check(str[i]))
			k++;
		i++;
	}
	if (k > 0)
		return (0);
	return (1);
}
