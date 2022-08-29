/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:06:51 by aterente          #+#    #+#             */
/*   Updated: 2022/08/17 15:26:23 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alpha_check(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
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
		if (!ft_alpha_check(str[i]))
			k++;
		i++;
	}
	if (k > 0)
		return (0);
	return (1);
}
