/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:13:56 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 15:39:06 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;
	size_t i;
	size_t len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	if (size <= len_dest)
		return (ft_strlen(src) + size);
	while (dest[i] && i < size - 1)
		i++;
	len = i;
	while (src[i - len] && i < size - 1)
	{
		dest[i] = src[i - len];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (len + ft_strlen(src));
}
