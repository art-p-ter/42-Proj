/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:09:21 by aterente          #+#    #+#             */
/*   Updated: 2022/08/23 13:46:41 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len2;

	i = 0;
	len = 0;
	len2 = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}
	while (src[i] != '\0' && i < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + len2);
}
