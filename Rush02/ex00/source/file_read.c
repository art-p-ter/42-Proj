/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 21:50:43 by aterente          #+#    #+#             */
/*   Updated: 2022/08/28 21:50:43 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proj_incl.h"

int	ft_get_size_dict(char *file_dict)
{
	int		open_dict;
	int		size;
	char	*buffer;

	size = 0;
	open_dict = open(file_dict, O_RDONLY);
	buffer = malloc(sizeof(char));
	while (read(open_dict, buffer, 1))
		size++;
	free(buffer);
	return (size);
}

char	*ft_read_file(char *file_dict)
{
	int		open_dict;
	int		file_size;
	char	*buffer;

	open_dict = open(file_dict, O_RDONLY);
	file_size = ft_get_size_dict(file_dict);
	buffer = malloc((file_size + 1) * sizeof(char));
	if (buffer == NULL || read(open_dict, buffer, file_size) == -1)
	{
		ft_putstr("Dict Error");
		return (NULL);
	}
	buffer[file_size] = '\0';
	return (buffer);
}