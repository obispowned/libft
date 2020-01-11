/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:49:25 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/10 21:10:23 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	unsigned int	total;
	unsigned int	lenglo;

	if (!s)
		return (NULL);
	lenglo = ft_strlen(s);
	if (start > lenglo)
		return (ft_strdup(""));
	i = 0;
	total = start + len;
	if (len < (lenglo - start))
		dest = (char*)ft_calloc(sizeof(char), (len + 1));
	else
		dest = (char*)ft_calloc(sizeof(char), (lenglo - start + 1));
	if (!dest)
		return (NULL);
	while (start < total)
		dest[i++] = s[start++];
	return (dest);
}
