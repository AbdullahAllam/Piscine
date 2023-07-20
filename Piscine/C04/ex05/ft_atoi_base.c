/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:45:30 by abali             #+#    #+#             */
/*   Updated: 2022/11/09 20:56:37 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
int
	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}

void
	ft_putchar(char a)
{
	write(1, &a, 1);
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

	size = 0;
	while (base[size])
		size++;
	i = 0;
	if (checkarray(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		while (nbr)
		{
			numberarray[i] = nbr % size;
			nbr = nbr / size;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[numberarray[i]]);
	}
}

int
	ft_atoi_base(char *str, char *base)
{
	int	x;

	x = ft_atoi(str);
	ft_putnbr_base(x, base);
	return (x);
}
/*
int main()
{
	char base[] = "01"; 
    char array[] = " ---+--+1234ab567";
	printf("%d", ft_atoi_base(array, base));
	return (0);
}*/
