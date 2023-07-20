/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:25:52 by abali             #+#    #+#             */
/*   Updated: 2022/11/08 15:07:13 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
unsigned int
	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sizedest;
	unsigned int	sizesrc;
	unsigned int	k;

	sizedest = 0;
	sizesrc = 0;
	k = 0;
	while (dest[sizedest])
		sizedest++;
	while (src[sizesrc])
		sizesrc++;
	if (size == 0 || size <= sizedest)
		return (size + sizesrc);
	while (src[k] && k < size - sizedest -1)
	{
		dest[sizedest + k] = src[k];
		k++;
	}
	dest[sizedest + k] = '\0';
	return (sizedest + sizesrc);
}
/*
int main()
{
	char src[] = "hello";
	char dest[] = "world";
	unsigned int size = 11;
	printf( "%d,%s", ft_strlcat(dest, src, size), dest);
}*/
