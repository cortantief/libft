/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:24:00 by sharboul          #+#    #+#             */
/*   Updated: 2020/11/19 05:46:41 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*h_d;
	unsigned char	*h_s;
	unsigned char	h_c;

	i = 0;
	h_d = (unsigned char *)dst;
	h_s = (unsigned char *)src;
	h_c = (unsigned char)c;
	while (i < n)
	{
		h_d[i] = h_s[i];
		if (h_s[i] == h_c)
			return (h_d + i + 1);
		i++;
	}
	return (NULL);
}
