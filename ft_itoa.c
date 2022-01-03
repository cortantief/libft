/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 07:51:14 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 11:59:53 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	count_decimals(unsigned int nb)
{
	unsigned int	c;

	c = 1;
	nb /= 10;
	while (nb)
	{
		c++;
		nb /= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	unsigned int	size;
	unsigned int	is_neg;
	char			*str;

	is_neg = (n < 0);
	if (is_neg)
		nb = -1 * n;
	else
		nb = n;
	size = count_decimals(nb);
	str = malloc(sizeof(*str) * (size + is_neg + 1));
	if (!str)
		return (NULL);
	str[size + is_neg] = '\0';
	if (is_neg)
		str[0] = '-';
	while (size--)
	{
		str[size + is_neg] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
