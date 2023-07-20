/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:10:54 by abali             #+#    #+#             */
/*   Updated: 2022/11/08 12:47:31 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int
	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 31 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char array[] = "dhgfiudgh";
	printf("%d",ft_str_is_printable(array));
	return (0);
}*/
