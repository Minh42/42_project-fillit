/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:42:44 by cmace             #+#    #+#             */
/*   Updated: 2017/11/16 17:31:44 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = dst;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		if ((unsigned char)d[i] == (unsigned char)c)
			return (d + i + 1);
		if (i + 1 == n)
			return (NULL);
		i++;
	}
	return (0);
}
