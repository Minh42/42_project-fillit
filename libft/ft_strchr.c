/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:11:09 by cmace             #+#    #+#             */
/*   Updated: 2017/11/14 17:34:44 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return (char *)(s + ft_strlen(s));
	while (s[i] != c && s[i] != '\0')
		i++;
	if (i >= ft_strlen(s))
		return (NULL);
	return (char *)(s + i);
}
