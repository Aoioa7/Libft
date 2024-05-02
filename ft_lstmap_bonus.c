/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:19:12 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 14:20:17 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*res;

	if (!lst || !f || !del)
		return (0);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (0);
	res = new_lst;
	while (lst)
	{
		if (!(lst->next))
			break ;
		new_lst->next = ft_lstnew(f((lst->next)->content));
		if (!(new_lst->next))
		{
			ft_lstclear(&res, del);
			return (0);
		}
		new_lst = new_lst->next;
		lst = lst->next;
	}
	new_lst->next = 0;
	return (res);
}
