/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:01:51 by thessena          #+#    #+#             */
/*   Updated: 2024/10/17 10:04:26 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;

	if (!dst && !src)
		return (NULL);
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	while (n--)
		*(temp_dst++) = *(temp_src++);
	return (dst);
}
