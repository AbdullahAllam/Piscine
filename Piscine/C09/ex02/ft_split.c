/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:16:53 by abali             #+#    #+#             */
/*   Updated: 2022/11/20 21:21:31 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int
	check_sep(char a, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (1);
		i++;
	}
	if (a == '\0')
		return (1);
	return (0);
}

int
	count_wd(char *strarray, char *separray)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (strarray[i])
	{
		if (check_sep(strarray[i + 1], separray) == 1
			&& check_sep(strarray[i], separray) == 0)
			count++;
		i++;
	}
	return (count);
}

void
	copy_wd(char *dest, char *src, char *separray)
{
	int	i;

	i = 0;
	while (check_sep(src[i], separray) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void
	ft_write(char **result, char *strarray, char *separray)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (strarray[i])
	{
		if (check_sep(strarray[i], separray) == 1)
			i++;
		else
		{
			j = 0;
			while (check_sep(strarray[i + j], separray) == 0)
				j++;
			result[count] = (char *)malloc(sizeof(char) * (j + 1));
			copy_wd(result[count], strarray + i, separray);
			i = i + j;
			count++;
		}
	}
}

char
	**ft_split(char *str, char *charset)
{
	int		count;
	char	**result;

	count = count_wd(str, charset);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	result[count] = 0;
	ft_write(result, str, charset);
	return (result);
}

int main()
{
	char **result;
	int i = 5;
	int j = 0;
	char strarray[] = "Hello/My@Name_is Abdullah";
	char strsep[] = " /@_";
	result = ft_split(strarray, strsep);
	while (j <= i)
	{
		printf("%s\n",result[j]);
		j++;
	}
	return (0);
}
