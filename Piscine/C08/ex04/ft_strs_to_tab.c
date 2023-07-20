/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:21:32 by abali             #+#    #+#             */
/*   Updated: 2022/11/15 18:24:35 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

char
	*ft_strdup(char *src)
{
	char	*copy;
	int		size;

	size = 0;
	while (src[size])
		size++;
	size = size + 1;
	copy = malloc(sizeof(char) * size);
	if (!(copy))
		return (NULL);
	size = 0;
	while (src[size])
	{
		copy[size] = src[size];
		size++;
	}
	copy[size] = '\0';
	return (copy);
}

int
	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*fields;
	int			i;

	i = 0;
	fields = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(fields))
		return (NULL);
	while (i < ac)
	{
		fields[i].str = av[i];
		fields[i].copy = ft_strdup(av[i]);
		fields[i].size = ft_strlen(av[i]);
		i++;
	}
	fields[i].str = 0;
	return (fields);
}
/*
int main(int argc, char **argv)
{
	t_stock_str	*fields;
	
	fields = ft_strs_to_tab(argc, argv);
	printf("%d", fields[3].size);
   return (0);
}*/
