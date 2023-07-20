/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:44:39 by abali             #+#    #+#             */
/*   Updated: 2022/11/05 21:55:51 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void
	ft_sort(int *min, int *max)
{
	int	dummy;

	if (*max < *min)
	{
		dummy = *max;
		*max = *min;
		*min = dummy;
	}
}

void
	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	j;

	j = 0;
	while (j < size)
	{	
		counter = j + 1;
		while (counter < size)
		{
			ft_sort(tab + j, tab + counter);
			counter++;
		}
		j++;
	}
}
/* int main()
{
int size = 4;
int array [] = {4,3,2,1};
ft_sort_int_tab(array,size);
printf ("%d,%d,%d,%d", array[0],array[1],array[2],array[3]);
return (0);
}
*/
