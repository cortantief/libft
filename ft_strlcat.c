/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:29:25 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:25:02 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	len;
	size_t	src_len;

	c = 0;
	len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	if (!dstsize || dstsize <= len)
		return (dstsize + src_len);
	while (c + 1 < dstsize - len && src[c])
	{
		dst[len + c] = ((char *)src)[c];
		c++;
	}
	dst[len + c] = '\0';
	return (len + src_len);
}
