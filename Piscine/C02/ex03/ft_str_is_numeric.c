/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:33:57 by abali             #+#    #+#             */
/*   Updated: 2022/11/06 20:34:28 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int
	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < '0' || str[counter] > '9' || str[counter] == '\0')
			return (0);
		counter++;
	}
	return (1);
}
/*
int main()
{
	char array[] = "";
	printf("%d", ft_str_is_numeric(array));
	return (0);
}*/
