/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:02:12 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:39:03 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s || start > (unsigned int)ft_strlen(s))
	{
		substr = malloc(sizeof(*s));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	substr = malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	substr[len] = '\0';
	while (len--)
		substr[len] = s[start + len];
	return (substr);
}
