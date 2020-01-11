/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:23:45 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 21:27:01 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*sc;

	sc = (char *)s;
	while (*sc && *sc != (char)c)
		sc++;
	return ((*sc == (char)c) ? sc : 0);
}