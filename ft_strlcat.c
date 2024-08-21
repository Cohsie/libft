/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-tor <jose-tor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:20:49 by jose-tor          #+#    #+#             */
/*   Updated: 2024/08/13 15:16:22 by jose-tor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (NULL == dst && 0 == dstsize)
		return (src_len);
	dest_len = ft_strlen(dst);
	if (dest_len >= dstsize)
		return (src_len + dstsize);
	else
		dstsize -= dest_len;
	ft_strlcpy(dst + dest_len, src, dstsize);
	return (dest_len + src_len);
}
/* int main(void)
{
    char src[] = " World!";
    char dst[20] = "Hello,";

    ft_strlcat(dst, src, sizeof(dst));
    printf("Result: %s\n", dst);

    return 0;
} */