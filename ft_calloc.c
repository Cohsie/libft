/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-tor <jose-tor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:01:08 by jose-tor          #+#    #+#             */
/*   Updated: 2024/08/13 16:04:22 by jose-tor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	len;
	void	*mem;

	len = count * size;
	mem = malloc(len);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, len);
	return (mem);
}
