/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:24:46 by cmace             #+#    #+#             */
/*   Updated: 2017/11/19 17:09:20 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*srccopie;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	srccopie = (char *)malloc(sizeof(*srccopie) * i + 1);
	if (srccopie == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		srccopie[i] = src[i];
		i++;
	}
	srccopie[i] = '\0';
	return (srccopie);
}
