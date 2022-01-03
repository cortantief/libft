/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 08:49:57 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:26:28 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*str;

	len = 0;
	if (!s)
		return (NULL);
	str = ft_strdup((char *)s);
	if (!str)
		return (NULL);
	if (!f)
		return (str);
	while (str[len])
	{
		str[len] = f(len, s[len]);
		len++;
	}
	return (str);
}
