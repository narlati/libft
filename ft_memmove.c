/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narlati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:01:50 by narlati           #+#    #+#             */
/*   Updated: 2016/11/11 10:54:05 by narlati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;

	if (!(dest2 = malloc(n)))
		return (NULL);
	ft_memcpy(dest2, src, n);
	ft_memcpy(dest, dest2, n);
	free(dest2);
	return (dest);
}
