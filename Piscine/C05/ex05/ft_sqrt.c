/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:38:22 by abali             #+#    #+#             */
/*   Updated: 2022/11/12 18:11:05 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int
	ft_sqrt(int nb)
{
	long	root;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	root = 2;
	while (root * root <= b)
	{
		if (root * root == b)
		{
			return (root);
		}
		root++;
	}
	return (0);
}
/*
int main()
{
	int nb = 1;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
