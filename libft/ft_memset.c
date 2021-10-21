/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:45:14 by daalmeid          #+#    #+#             */
/*   Updated: 2021/10/19 19:23:37 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
*/
void	*ft_memset(char *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && str[i] != '\0')
	{	
		str[i] = c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[50];

	strcpy(str, "This is string.h library function");
	puts(str);
	memset(str, '$', 7);
	puts(str);
	ft_memset(str, '&', 7);
	puts(str);
	return (0);
}
*/
