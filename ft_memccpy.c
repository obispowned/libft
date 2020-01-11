/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:58:20 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 21:36:51 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *s;
	char *s2;

	s = (char *)dst;
	s2 = (char *)src;
	while (n--)
	{
		*s = *s2;
		if (*s2 == (char)c)
		{
			dst++;
			return (dst);
		}
		s++;
		s2++;
		dst++;
	}
	return (NULL);
}
