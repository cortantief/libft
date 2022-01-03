/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 08:23:32 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:14:27 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	free_all(t_list *lst, void (*del)(void *))
{
	if (lst->next)
		free_all(lst->next, del);
	ft_lstdelone(lst, del);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del)
		return ;
	else if (!lst || !(*lst))
	{
		lst = NULL;
		return ;
	}
	free_all(*lst, del);
	*lst = NULL;
}
