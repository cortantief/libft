/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 03:05:30 by sharboul          #+#    #+#             */
/*   Updated: 2020/11/19 06:02:49 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*h_s;
	unsigned char	h_c;
	unsigned int	h_n;

	h_n = (unsigned int)n;
	h_c = (unsigned char)c;
	i = 0;
	h_s = (unsigned char *)s;
	while (i < h_n)
	{
		if (h_s[i] == h_c)
			return ((void *)(h_s + i));
		i++;
	}
	return (NULL);
}
