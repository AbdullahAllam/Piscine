/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:41:57 by abali             #+#    #+#             */
/*   Updated: 2022/11/12 15:43:33 by abali            ###   ########.fr       */
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

	i = 0;
	while (argc && argv[0][i])
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}
