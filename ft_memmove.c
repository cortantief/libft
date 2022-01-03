/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 02:10:55 by sharboul          #+#    #+#             */
/*   Updated: 2020/11/19 05:54:43 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	c;
	char	*h_d;
	char	*h_s;

	c = 0;
	h_d = (char *)dst;
	h_s = (char *)src;
	if (!dst && !src)
		return (dst);
	if (dst < src)
	{
		while (c < len)
		{
			h_d[c] = h_s[c];
			c++;
		}
	}
	else
		while (len--)
			h_d[len] = h_s[len];
	return (dst);
}
