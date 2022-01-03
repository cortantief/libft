/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 05:22:36 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:27:17 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#define VALID 1

static size_t	is_matching(const char *dst, const char *src, \
		size_t c, size_t l)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		if (dst[c + i] != src[i] || c + i >= l)
			return (!VALID);
		i++;
	}
	return (VALID);
}

char	*ft_strnstr(const char *haystack, \
		const char *needle, size_t len)
{
	size_t	c;

	c = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[c] && c < len)
	{
		if (is_matching(haystack, needle, c, len))
			return ((char *)(haystack + c));
		c++;
	}
	return (NULL);
}
