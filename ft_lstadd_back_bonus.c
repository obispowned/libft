/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:45:53 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/06 16:26:27 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*p;

	p = ft_lstlast(*alst);
	if (new)
	{
		if (*alst != NULL)
		{
			p->next = new;
			new->next = NULL;
		}
		else
		{
			*alst = new;
			new->next = NULL;
		}
	}
}
