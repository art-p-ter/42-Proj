/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:59:31 by aterente          #+#    #+#             */
/*   Updated: 2022/08/18 21:16:36 by aterente         ###   ########.fr       */
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

int	ft_up_check(char c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

int	ft_spec_char_check(char c)
{
	if ((c >= 0 && c <= 47)
		|| (c >= 58 && c <= 64)
		|| (c >= 91 && c <= 96)
		|| (c >= 123 && c <= 126))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_low_check(str[0]))
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		i++;
		if (ft_up_check(str[i + 1]))
		{
			str[i + 1] = str[i + 1] + 32;
		}
		if (ft_spec_char_check(str[i]))
		{	
			if (ft_low_check(str[i + 1]))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
