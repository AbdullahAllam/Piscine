/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:41:57 by abali             #+#    #+#             */
/*   Updated: 2022/11/13 16:41:59 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int
	ft_ultimate_range(int **range, int min, int max)
{
	int	counter;
	int	*array;

	counter = 0;
	if (min >= max)
	{
		array = NULL;
		return (0);
	}
	else
	{
		array = malloc(sizeof(int) * (max - min));
		if (!(array))
			return (-1);
		while (counter < max - min)
		{
			array[counter] = min + counter;
			counter++;
		}
		*range = array;
		return (counter);
	}
}
/*
int main()
{
	int **array;
	int min = 10;
	int max = 10;
	printf("%d", ft_ultimate_range(array, min, max));
	return (0);
}*/
