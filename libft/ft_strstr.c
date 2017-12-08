/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:08:18 by cmace             #+#    #+#             */
/*   Updated: 2017/11/10 19:40:44 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*cp_htmp;
	const char	*cp_ntmp;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		while (*haystack && *needle && *haystack != *needle)
			haystack++;
		if (!*haystack)
			return (NULL);
		cp_htmp = haystack;
		cp_ntmp = needle;
		while (*cp_htmp && *cp_ntmp && *cp_htmp == *cp_ntmp)
		{
			cp_htmp++;
			cp_ntmp++;
		}
		if (!*cp_ntmp)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
