/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 22:51:29 by aterente          #+#    #+#             */
/*   Updated: 2022/08/28 23:10:12 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proj_incl.h"

int	main(void)
{
	char	*str;

	str = ft_read_file("numbers.dict");
	ft_putstr(str);
	free(str);
	return (0);
}
