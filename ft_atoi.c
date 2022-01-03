/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 05:55:12 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 11:46:22 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' \
			|| c == ' ');
}

int	ft_atoi(const char *str)
{
	long int	val;
	int			c;
	int			is_neg;

	is_neg = 1;
	val = 0;
	c = 0;
	while (ft_isspace(str[c]))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c++] == '-')
			is_neg = -1;
	}
	while (ft_isdigit(str[c++]))
	{
		if (is_neg == -1 && val < (LONG_MIN / 10))
			return (0);
		else if (val > (LONG_MAX / 10))
			return (-1);
		val = (val * 10) + (is_neg * (str[c - 1] - '0'));
	}
	return (val);
}
