/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:50:27 by abali             #+#    #+#             */
/*   Updated: 2022/11/05 18:53:19 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
void
	putchar(char a)
{
	write(1, &a, 1);
}

int main()
{
int	counter;

char *str;
str ="hell";
counter = ft_strlen(str);
putchar((counter %  10) + '0');
return (0);
} */
