/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:23:09 by aterente          #+#    #+#             */
/*   Updated: 2022/08/18 14:26:51 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
