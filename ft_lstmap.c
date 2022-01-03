/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharboul <sharboul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:31:42 by sharboul          #+#    #+#             */
/*   Updated: 2022/01/03 12:45:46 by sharboul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lst_mapping(t_list *dst, t_list *src, void *(*f)(void *))
{
	t_list	*tmp;

	if (!src)
		return (dst);
	tmp = ft_lstnew(f(src->content));
	if (!tmp)
		return (NULL);
	ft_lstadd_back(&dst, tmp);
	return (lst_mapping(dst, src->next, f));
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;

	(void)del;
	if (!lst || !f)
		return (NULL);
	dst = ft_lstnew(f(lst->content));
	if (!dst)
		return (NULL);
	if (!lst_mapping(dst, lst->next, f))
		return (NULL);
	return (dst);
}
