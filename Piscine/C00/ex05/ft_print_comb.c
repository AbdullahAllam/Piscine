/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:26:54 by abali             #+#    #+#             */
/*   Updated: 2022/11/04 16:38:01 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

void
	printdigits(char a, char b, char c)
{
	putchar(a);
	putchar(b);
	putchar(c);
}

void
	ft_print_comb(void)
{
	char	firstdigit;
	char	seconddigit;
	char	thirddigit;

	firstdigit = '0';
	while (firstdigit <= '7')
	{
		seconddigit = firstdigit +1;
		while (seconddigit <= '8')
		{
			thirddigit = seconddigit +1;
			while (thirddigit <= '9')
			{
				printdigits(firstdigit, seconddigit, thirddigit);
				if (firstdigit != '7')
				{
					write(1, ", ", 2);
				}
				thirddigit++;
			}
			seconddigit++;
		}
		firstdigit++;
	}
}
