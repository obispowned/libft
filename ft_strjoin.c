/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 10:49:54 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 12:46:53 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(char const *s1, char const *s2)
{
	char			*dest;
	size_t			size1;
	size_t			size2;
	size_t			i;

	if (!(s1 && s2))
		return (0);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	if (!(dest = (char *)malloc(sizeof(char) * (size1 + size2 + 1))))
		return (0);
	i = 0;
	while (i < size1)
	{
		dest[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		dest[size1 + i] = s2[i];
		i++;
	}
	dest[size1 + size2] = 0;
	return (dest);
}
