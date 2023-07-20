/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:08:37 by abali             #+#    #+#             */
/*   Updated: 2022/11/08 14:49:30 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
int
	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int main()
{
	char array1[] = "";
	char array2[] = "hellO";
	char array1a[] = "hellO";
    char array2a[] = "";
	unsigned int size = 5;
	printf("%d", ft_strncmp(array1, array2,size));
	printf("%c",'\n');
	printf("%d", strncmp(array1a, array2a,size));
	return (0);
}*/
