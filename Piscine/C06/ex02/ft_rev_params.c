/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:05:01 by abali             #+#    #+#             */
/*   Updated: 2022/11/12 17:05:40 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

int
	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	while (argc && i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			putchar(argv[i][j]);
			j++;
		}
		putchar('\n');
		i--;
	}
	return (0);
}
