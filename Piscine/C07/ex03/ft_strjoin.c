/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:51:13 by abali             #+#    #+#             */
/*   Updated: 2022/11/13 18:55:37 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int
	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	return (counter);
}

char
	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int
	ft_array_length(int size, char **strs, char *sep)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + 1 + (size - 1) * ft_strlen(sep);
	return (length);
}

char
	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*array;
	int		counter;

	if (size == 0)
	{
		array = malloc(sizeof(char));
		*array = 0;
		return (array);
	}
	array = malloc(sizeof(char) * ft_array_length(size, strs, sep));
	if (!(array))
		return (NULL);
	counter = 0;
	*array = 0;
	while (counter < size)
	{
		ft_strcat(array, strs[counter]);
		if (counter < (size - 1))
			ft_strcat(array, sep);
		counter++;
	}
	return (array);
}
/*
int main(int argc, char *argv[])
{
    char sep[] = "hi";
    printf("%s", ft_strjoin(argc, argv, sep));
    return (0);
}*/
