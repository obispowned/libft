/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 18:13:18 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/03 19:01:26 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*pointer;
	t_list	*aux;

	if (lst == NULL || f == NULL)
		return (NULL);
	pointer = NULL;
	while (lst != NULL)
	{
		if ((aux = ft_lstnew((*f)(lst->content))) == NULL)
		{
			ft_lstclear(&pointer, del);
			return (NULL);
		}
		ft_lstadd_back(&pointer, aux);
		lst = lst->next;
	}
	return (pointer);
}
