/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_28_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:14:58 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/21 16:47:46 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

static int	ft_count_substr(char const *s, char c)
{
	int		count;
	int		count_c;

	count = 0;
	count_c = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			count_c++;
		count++;
	}
	return (count_c);
}

static char	**ft_alloc_split(char const *s, char c, int pos_arr, int count_arr)
{
	int		count;
	char	**ptr;

	ptr = malloc(sizeof(char *) * (ft_count_substr(s, c) + 1));
	if (!ptr)
		return (NULL);
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{	
			ptr[pos_arr] = malloc(sizeof(char) * (count_arr + 1));
			if (!ptr[pos_arr])
				return (NULL);
			count_arr = -1;
			pos_arr++;
		}
		count++;
		count_arr++;
	}
	ptr[pos_arr] = malloc(sizeof(char) * (count_arr + 1));
	if (!ptr[pos_arr])
		return (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		arr;
	int		arrarr;
	int		count;
	char	**ptr;

	arr = 0;
	arrarr = 0;
	count = 0;
	ptr = ft_alloc_split(s, c, arr, arrarr);
	if (!ptr)
		return (NULL);
	while (s[count] != '\0')
	{
		ptr[arr][arrarr] = s[count];
		if (s[count] == c)
		{
			ptr[arr][arrarr] = '\0';
			arrarr = -1;
			arr++;
		}
		count++;
		arrarr++;
	}
	ptr[arr][arrarr] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char const	*s = "Dario Almeida Barroca";
	char		c = ' ';
	char		**ptr;

	printf("%s\n", s);
	ptr = ft_split(s, c);
	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	free (ptr);
	return (0);
}
*/