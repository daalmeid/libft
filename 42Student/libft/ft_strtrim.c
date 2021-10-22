/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:47:19 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/22 18:41:18 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <stdlib.h>
#include "libft.h"

static void	ft_trim_final(char *ptr, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (set[i] != '\0')
		i++;
	j = i;
	k = 0;
	while (ptr[k] != '\0')
		k++;
	while (ptr[k] == set[i])
	{
		ptr[k] = '\0';
		i--;
		if (i < 0)
			i = j - 1;
		k--;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	int				j;
	char			*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(s1);
	if (!ptr)
		return (NULL);
	while (ptr[j] == set[i])
	{
		i++;
		if (set[i] == '\0')
			i = 0;
		j++;
	}
	i = 0;
	while (ptr[i] != '\0')
	{
		ptr[i] = ptr[i + j];
		i++;
	}
	ft_trim_final(ptr, set);
	return (ptr);
}
/*
int	main(void)
{
	char	*s1 = "!a!a!aThis is my string!a!a!a";
	char	*set = "!a";

	printf("%s\n", s1);
	printf("%s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
	return (0);
}
*/