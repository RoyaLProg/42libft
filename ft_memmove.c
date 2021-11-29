/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccambium <ccambium@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:35:33 by ccambium          #+#    #+#             */
/*   Updated: 2021/10/28 12:43:45 by ccambium         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[2 ^ (sizeof(size_t) * 8)];

	i = 0;
	while (i < n)
	{
		*(temp + i) = *((char *)src + (i));
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + (i)) = *(temp + i);
		i++;
	}
	return (dest);
}
