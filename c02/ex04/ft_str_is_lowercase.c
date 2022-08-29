/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:03:56 by aterente          #+#    #+#             */
/*   Updated: 2022/08/17 15:27:37 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_low_check(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
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
		if (!ft_low_check(str[i]))
			k++;
		i++;
	}
	if (k > 0)
		return (0);
	return (1);
}
