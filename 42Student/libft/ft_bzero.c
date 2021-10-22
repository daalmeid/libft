/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:15:04 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/22 18:11:54 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return ;
}
/*
int	main(void)
{
	char	str1[50];
	char	str2[50];

	strcpy(str1, "This is string.h library function1");
	puts(str1);
	bzero(str1, 6);
	puts(str1);
	strcpy(str2, "This is string.h library function2");
	puts(str2);
	ft_bzero(str2, 6);
	puts(str2);
	return (0);
}
*/