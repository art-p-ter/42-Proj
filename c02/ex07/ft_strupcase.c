/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:07:14 by aterente          #+#    #+#             */
/*   Updated: 2022/08/18 14:26:30 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_check(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
