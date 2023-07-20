/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 00:58:11 by abali             #+#    #+#             */
/*   Updated: 2022/11/08 14:06:36 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/
unsigned int
	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srcsize;
	unsigned int	j;

	srcsize = 0;
	j = 0;
	while (src[srcsize])
		srcsize++;
	if (size != 0)
	{
		while (src[j] && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (srcsize);
}
/*
int main()
{
	char array[] = "abcd";
	char dest[5];
	unsigned int size = 5;
	printf("%d,%c,%s", ft_strlcpy(dest, array, size), dest[4],dest);
    printf("%lu,%c,%s", strlcpy(dest, array, size), dest[4],dest);
			}*/
