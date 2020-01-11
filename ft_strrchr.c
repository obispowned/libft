/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:57:04 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 12:55:03 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = (char*)s + ft_strlen(s);
	while (aux != s && *aux != (char)c)
		aux--;
	return ((*aux != (char)c) ? NULL : aux);
}
