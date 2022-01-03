/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 04:14:14 by sharboul          #+#    #+#             */
/*   Updated: 2020/11/20 15:10:01 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	c;
	unsigned char	*h1;
	unsigned char	*h2;

	c = 0;
	h1 = (unsigned char *)s1;
	h2 = (unsigned char *)s2;
	while (c < n)
	{
		if (h1[c] != h2[c])
			return (h1[c] - h2[c]);
		c++;
	}
	return (0);
}
