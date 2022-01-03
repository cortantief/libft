/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 02:26:46 by sharboul          #+#    #+#             */
/*   Updated: 2020/11/17 02:44:02 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*h_d;
	unsigned char	*h_s;
	unsigned int	c;

	c = 0;
	h_d = (unsigned char *)s1;
	h_s = (unsigned char *)s2;
	while ((size_t)c < n && (h_d[c] || h_s[c]))
	{
		if (h_d[c] != h_s[c])
			return (h_d[c] - h_s[c]);
		c++;
	}
	return (0);
}
