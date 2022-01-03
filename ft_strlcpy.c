/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 03:25:34 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:25:20 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;

	c = 0;
	if (!src)
		return (0);
	else if (!dst)
		return (ft_strlen((char *)src));
	while (src[c] && c + 1 < dstsize)
	{
		dst[c] = src[c];
		c++;
	}
	if (dstsize)
		dst[c] = '\0';
	return (c + ft_strlen((char *)(src + c)));
}
