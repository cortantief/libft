/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:19:31 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:22:51 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			return ((char *)(&(s[counter])));
		counter++;
	}
	if (c == '\0')
		return ((char *)(&(s[counter])));
	else
		return (NULL);
}
