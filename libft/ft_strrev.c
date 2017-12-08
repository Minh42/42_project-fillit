/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:51:37 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 18:54:56 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	size_t	i;
	size_t	y;

	if (!str)
		return (NULL);
	i = -1;
	y = ft_strlen(str) - 1;
	while (i++ < --y)
	{
		tmp = str[i];
		str[i] = str[y];
		str[y] = tmp;
	}
	return (str);
}
