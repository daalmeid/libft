/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:49:29 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/21 17:10:51 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[50];
	char	dst[50];

	strcpy(dst, "This is dst");
	strcpy(src, "News is good");
	puts(dst);
	memcpy(dst, src, 20);
	puts(dst);
	return (0);
}
*/