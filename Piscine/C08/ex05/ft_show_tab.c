/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:40:53 by abali             #+#    #+#             */
/*   Updated: 2022/11/15 19:41:47 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	putchar(char a)
{
	write(1, &a, 1);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}

void	putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		putchar('-');
		i = i * -1;
	}
	if (i > 9)
	{
		putnbr(i / 10);
		putnbr(i % 10);
	}
	else
		putchar(i + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	counter;

	counter = 0;
	while (par[counter].str)
	{
		putstr(par[counter].str);
		putnbr(par[counter].size);
		putchar('\n');
		putstr(par[counter].copy);
		counter++;
	}
}
