/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:28:30 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/15 11:50:35 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*dlst;
	
	dlst = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!dlst)
		return (NULL);
	while (lst)
	{
		dlst->content = f(lst->content);
		if (!dlst->content)
		{
			ft_lstdelone(dlst, del);
			return (NULL);
		}
		dlst->next = lst->next;
		lst = lst->next;
	}
	return (dlst);
}