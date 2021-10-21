/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:20:42 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/21 17:13:38 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;
	size_t	dst_str_size;

	i = 0;
	count = 0;
	while (dst[count] != '\0')
		count++;
	dst_str_size = count;
	while (src[i] != '\0' && count < dstsize - 1)
	{
		dst[count] = src[i];
		i++;
		count++;
	}
	if (dstsize != 0)
		dst[count] = '\0';
	while (src[i] != '\0')
		i++;
	return (dst_str_size + i);
}
/*
int	main(void)
{
	char	src[] = "good job";
	char	dst[11] = "very ";

	printf("%s, with created string size: %lu\n", dst, ft_strlcat(dst, src, 11));
	return (0);
}*/