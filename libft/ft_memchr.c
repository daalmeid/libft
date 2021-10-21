/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:15:19 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/21 17:28:15 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*ptr;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	if (c == '\0')
	{	
		ptr = &s[i];
		return (ptr);
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "does it work?";

	printf("<%s>, pointer to <%s>\n", str, ft_memchr(str, 'i', 6));
	printf("<%s>, pointer to <%s>\n", str, memchr(str, 'i', 6));
	return (0);
}
