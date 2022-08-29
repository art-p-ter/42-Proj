/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aterente <aterente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 19:48:31 by aterente          #+#    #+#             */
/*   Updated: 2022/08/25 23:30:12 by aterente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (res == 0 && (s1[i] != '\0' || s2[i] != '\0'))
	{
		res = s1[i] - s2[i];
		i++;
	}
	return (res);
}

void	ft_params_output(int argc, char **argv)
{
	char	*param;
	int		i;
	int		j;

	j = 1;
	while (j < argc)
	{
		param = argv[j];
		i = 0;
		while (param[i] != '\0')
		{
			write(1, &param[i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	if (argc < 1)
		return (0);
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_params_output(argc, argv);
}
