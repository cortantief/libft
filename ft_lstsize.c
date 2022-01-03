/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:20:21 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:18:22 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_lst(t_list *lst, int start)
{
	if (!lst)
		return (0);
	else if (!(lst->next))
		return (start + 1);
	else
		return (count_lst(lst->next, start + 1));
}

int	ft_lstsize(t_list *lst)
{
	return (count_lst(lst, 0));
}
