/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narlati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 08:24:43 by narlati           #+#    #+#             */
/*   Updated: 2016/11/11 13:29:31 by narlati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int i;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	if (ft_strlen(s2) > ft_strlen(s1))
		return (NULL);
	while (s1[i] != '\0')
	{
		if (ft_strncmp(&s1[i], s2, ft_strlen(s2) - 1) == 0)
			return (&((char *)s1)[i]);
		i++;
	}
	return (NULL);
}
