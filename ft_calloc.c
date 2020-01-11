/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agutierr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 19:44:05 by agutierr          #+#    #+#             */
/*   Updated: 2019/12/11 12:26:23 by agutierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	sum;

	sum = count * size;
	if (!(ptr = malloc(sum)))
		return (0);
	ft_memset(ptr, 0, sum);
	return ((void *)ptr);
}
