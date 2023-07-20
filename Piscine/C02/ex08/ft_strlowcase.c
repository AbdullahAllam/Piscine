/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:03:54 by abali             #+#    #+#             */
/*   Updated: 2022/11/06 23:06:35 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
char
	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str [i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
/*
int main()
{
	char array[] = "SSSfihiH";
	printf("%s", ft_strlowcase(array));
	return (0);
	}*/
