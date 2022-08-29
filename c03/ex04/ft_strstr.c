/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:54:49 by aterente          #+#    #+#             */
/*   Updated: 2022/08/22 23:43:31 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	indicator;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			indicator = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					indicator = 1;
				i++;
			}
			if (indicator == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
