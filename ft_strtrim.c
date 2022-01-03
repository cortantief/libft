/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:54:47 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:44:58 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#define INSET 1

static unsigned int	is_inset(char const *set, char chr)
{
	unsigned int	c;

	c = 0;
	while (set[c])
	{
		if (set[c] == chr)
			return (INSET);
		c++;
	}
	return (!INSET);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	c;
	char			*str;

	c = 0;
	if (!s1 || !set)
		return ((char *)s1);
	while (is_inset(set, s1[c]))
		c++;
	start = c;
	end = c;
	while (s1[c])
	{
		if (!is_inset(set, s1[c]))
			end = c;
		c++;
	}
	str = malloc(sizeof(*s1) * (end - start + 2));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
