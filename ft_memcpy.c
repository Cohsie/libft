/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-tor <jose-tor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:46:06 by jose-tor          #+#    #+#             */
/*   Updated: 2024/07/06 20:24:00 by jose-tor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	d = dst;
	s = src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dst);
}
