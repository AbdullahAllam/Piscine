/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:55:21 by abali             #+#    #+#             */
/*   Updated: 2022/11/08 17:08:45 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void
	putchar(char a)
{
	write(1, &a, 1);
}

void
	hexa(char c)
{
	int		negative_char;
	char	hex_n1;
	char	hex_n2;

	putchar('\\');
	if (c < 0)
	{
		negative_char = (-128 - (c)) * -1 + 128;
		hex_n1 = negative_char / 16;
		hex_n2 = negative_char % 16;
	}
	else
	{
		hex_n1 = c / 16;
		hex_n2 = c % 16;
	}
	if (hex_n1 < 10)
		putchar(hex_n1 + '0');
	else
		putchar(hex_n1 + 87);
	if (hex_n2 < 10)
		putchar(hex_n2 + '0');
	else
		putchar(hex_n2 + 87);
}

void
	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			putchar(str[i]);
		else
		{
			hexa(str[i]);
		}
		i++;
	}
}
/*
int main()
{
	char array[] = "Coucou\ntu\t vas\v bien ?";
	ft_putstr_non_printable(array);
	return 0;
}*/
