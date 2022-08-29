/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:07:23 by aterente          #+#    #+#             */
/*   Updated: 2022/08/17 15:32:38 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_up_check(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
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
		if (!ft_up_check(str[i]))
			k++;
		i++;
	}
	if (k > 0)
		return (0);
	return (1);
}
