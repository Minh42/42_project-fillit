/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:59:34 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 17:47:55 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	k;
	int		first;
	int		last;
	char	**tab;

	tab = NULL;
	i = 0;
	k = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 1))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			first = i;
			while (s[i] && s[i] != c)
				i++;
			last = i;
			if (last > first)
				tab[k++] = ft_strsub(s, first, (last - first));
		}
		tab[k] = NULL;
	}
	return (tab);
}
