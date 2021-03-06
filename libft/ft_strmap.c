/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 18:46:59 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 12:05:35 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tab;
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1));
		if (tab == NULL)
			return (NULL);
		while (s[i])
		{
			tab[i] = f(s[i]);
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
