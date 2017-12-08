/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:49:46 by cmace             #+#    #+#             */
/*   Updated: 2017/11/16 19:29:59 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		y;

	i = ft_strlen(s);
	if (c == '\0')
		return (char *)(s + ft_strlen(s));
	y = i - 1;
	while (y >= 0)
	{
		if (s[y] == (char)c)
			return ((char *)&s[y]);
		y--;
	}
	return (NULL);
}
