/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:53:06 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 12:35:07 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*ldest;
	char		*lsrc;
	int			i;

	d = dst;
	s = src;
	i = 0;
	if (d == s)
		return (dst);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		ldest = d + (n - 1);
		lsrc = (char*)s + (n - 1);
		while (n--)
			*ldest-- = *lsrc--;
	}
	return (dst);
}
