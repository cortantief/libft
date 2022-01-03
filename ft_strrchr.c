/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:34:39 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:27:42 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	last_id;
	unsigned int	founded;

	i = 0;
	last_id = 0;
	founded = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			founded = 1;
			last_id = i;
		}
		i++;
	}
	if (founded)
		return ((char *)(&s[last_id]));
	else if (c == '\0')
		return ((char *)(&s[i]));
	else
		return (NULL);
}
