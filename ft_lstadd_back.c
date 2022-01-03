/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 07:40:52 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:00:27 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lstadd_back(t_list *lst, t_list *new)
{
	if (!(lst->next))
		lst->next = new;
	else
		lstadd_back(lst->next, new);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	else if (!(*alst))
		*alst = new;
	else
		lstadd_back(*alst, new);
}
