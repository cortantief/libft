/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 04:19:09 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:24:28 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c;
	size_t	i;
	char	*str;

	c = 0;
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	else if (!str)
		return (NULL);
	while (s1[i])
		str[c++] = s1[i++];
	i = 0;
	while (s2[i])
		str[c++] = s2[i++];
	str[c] = '\0';
	return (str);
}
