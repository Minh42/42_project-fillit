/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:56:42 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 12:04:34 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*allocated;
	size_t	i;

	i = 0;
	if (!size)
		return (0);
	allocated = (char *)malloc(size);
	if (allocated == NULL)
		return (NULL);
	while (i < size)
	{
		allocated[i] = 0;
		i++;
	}
	return ((void*)allocated);
}
