/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_incomplete.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:32:12 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/19 19:20:47 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <stdlib.h>
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(size * count);
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	int	*ptr1;
	int	*ptr2;
	int	i;

	i = 0;
	ptr1 = ft_calloc(6, sizeof(int));
	ptr2 = calloc(6, sizeof(int));
	while (i < 6)
	{	
		printf("ptr1[%d] == %d; ", i, ptr1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("ptr2[%d] == %d; ", i, ptr2[i]);
		i++;
	}
	printf("\n");
	free(ptr1);
	free(ptr2);
	return (0);
}
*/