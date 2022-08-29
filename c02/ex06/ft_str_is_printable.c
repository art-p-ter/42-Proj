/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:34:30 by aterente          #+#    #+#             */
/*   Updated: 2022/08/18 14:23:42 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_check(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
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
		if (!ft_char_check(str[i]))
			k++;
		i++;
	}
	if (k > 0)
		return (0);
	return (1);
}
