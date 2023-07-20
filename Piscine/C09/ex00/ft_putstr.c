/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:11:53 by abali             #+#    #+#             */
/*   Updated: 2022/11/05 17:22:27 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

void
	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		putchar(str[counter]);
		counter++;
	}
}
/*
int	main(void)
{
	char	str[5];

	str[0] = 'H';
	str[1] = 'E';
	str[2] = 'L';
	str[3] = 'L';
	str[4] = 'O';
	ft_putstr(str);
	return (0);
}
*/