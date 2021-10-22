/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:24:24 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/22 18:18:16 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return ((char *) ptr);
		}
		i++;
	}
	if (c == '\0')
	{	
		ptr = &s[i];
		return ((char *) ptr);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s = "does it work?";

	printf("<%s>, pointer to <%s>\n",s, ft_strchr(s, 'a'));
	printf("<%s>, pointer to <%s>\n",s, strchr(s, 'a'));
	return (0);
}
*/