/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 06:30:28 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:52:52 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**free_tab(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (tab);
}

static unsigned int	count_split(char const *s, char sep)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == sep)
			i++;
		if (s[i] && s[i] != sep)
			c++;
		while (s[i] && s[i] != sep)
			i++;
	}
	return (c);
}

static char	**string_splitter(char **tab, char const *s, char sep)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	start;

	i = 0;
	c = 0;
	while (s[c])
	{
		while (s[c] && s[c] == sep)
			c++;
		start = c;
		while (s[c] && s[c] != sep)
			c++;
		if (start < c)
		{
			tab[i] = ft_substr(s, start, c - start);
			if (!tab[i++])
				return (free_tab(tab));
		}
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(*tab) * (count_split(s, c) + 1));
	if (!tab)
		return (NULL);
	return (string_splitter(tab, s, c));
}
