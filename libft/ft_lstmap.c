/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bersoy <bersoy@student.42.tr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:08:06 by bersoy            #+#    #+#             */
/*   Updated: 2022/02/19 01:41:23 by bersoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
