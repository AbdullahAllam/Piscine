/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:10:08 by abali             #+#    #+#             */
/*   Updated: 2022/11/05 20:12:08 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void
	ft_rev_int_tab(int *tab, int size)
{
	int	inccounter;
	int	deccounter;
	int	dummy;

	inccounter = 0;
	deccounter = size - 1;
	while (inccounter < size / 2)
	{
		dummy = tab[inccounter];
		tab[inccounter] = tab[deccounter];
		tab[deccounter] = dummy;
		inccounter++;
		deccounter--;
	}
}
int main()
{
	int counter = 0;
	int size = 5;
	int array [] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(array , size); 
	
	printf("%d,%d,%d,%d,%d ", array[0], array[1],array[2],array[3],array[4] );

	return (0);
}	
