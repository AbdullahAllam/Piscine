/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:45:27 by abali             #+#    #+#             */
/*   Updated: 2022/11/12 19:15:41 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int
	ft_is_prime(int nb)
{
	long	i;
	long	b;

	b = nb;
	i = 2;
	if (b <= 1)
		return (0);
	while (i < b)
	{	
		if (b % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int
	ft_find_next_prime(int nb)
{
	int	i;
	int	flag;

	if (nb < 0)
		nb = 0;
	i = nb;
	while (1)
	{
		flag = ft_is_prime(i);
		if (flag == 1)
			break ;
		i++;
	}
	return (i);
}
/*
int main()
{
	int nb = -5;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/
