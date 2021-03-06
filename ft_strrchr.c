/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narlati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:12:43 by narlati           #+#    #+#             */
/*   Updated: 2016/11/09 15:57:13 by narlati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)&s1[i]);
	while (s1[i] != c && i >= 0)
		i--;
	if (s1[i] == c)
		return ((char*)&s1[i]);
	return (NULL);
}
