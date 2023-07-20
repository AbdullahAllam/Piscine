/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:21:31 by abali             #+#    #+#             */
/*   Updated: 2022/11/21 14:53:50 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	if (!copy)
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
/*
int main()
{
	char src[] = "hello";

	printf("%s", ft_strdup(src));
	return (0);
}*/
