/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-tor <jose-tor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:40:59 by jose-tor          #+#    #+#             */
/*   Updated: 2024/08/13 15:25:36 by jose-tor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;
	int			num;

	last = NULL;
	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] == (char)c)
			last = str + num;
		num++;
	}
	if (str[num] == (char)c)
		last = str + num;
	return ((char *)last);
}
