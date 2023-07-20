/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:01:52 by abali             #+#    #+#             */
/*   Updated: 2022/11/09 20:03:10 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

int
	arraysize(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int
	checkarray( char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[i] || !base[i + 1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void
	ft_putnbr_base(int nbr, char *base)
{	
	int	size;
	int	i;
	int	numberarray[300];

	size = arraysize(base);
	i = 0;
	if (checkarray(base))
	{
		if (nbr < 0)
		{
			putchar('-');
			nbr = nbr * -1;
		}
		while (nbr)
		{
			numberarray[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
		while (--i >= 0)
		{
			putchar(base[numberarray[i]]);
		}
	}
}

int main()
{
	int nbr = 7;
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	return (0);
}
