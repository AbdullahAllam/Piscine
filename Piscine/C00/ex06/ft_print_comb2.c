/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:38:33 by abali             #+#    #+#             */
/*   Updated: 2022/11/05 15:39:42 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

void
	ft_print_comb2(void)
{
	int	firstcounter;
	int	secondcounter;

	firstcounter = 0;
	while (firstcounter <= 98)
	{
		secondcounter = firstcounter + 1;
		while (secondcounter <= 99)
		{
			putchar((firstcounter / 10) + '0');
			putchar((firstcounter % 10) + '0');
			write(1, " ", 1);
			putchar((secondcounter / 10) + '0');
			putchar((secondcounter % 10) + '0');
			if (secondcounter != 99 || firstcounter != 98)
			{
				write(1, ", ", 2);
			}
			secondcounter++;
		}
	firstcounter++;
	}
}
