/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:55:42 by abali             #+#    #+#             */
/*   Updated: 2022/11/07 20:56:25 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int
	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
	char array1[] = "123456";
	char array2[] = "12345678";
	char array1a[] = "123456";
    char array2a[] = "12345678";
	printf("%d", ft_strcmp(array1, array2));
	printf("%c",'\n');
	printf("%d", strcmp(array1a, array2a));
	return (0);
}
*/