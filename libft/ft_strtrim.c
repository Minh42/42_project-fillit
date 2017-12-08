/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:37:50 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 16:14:49 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_trim	find_nb_to_trim(char const *s)
{
	size_t	i;
	size_t	len;
	t_trim	to_trim;

	to_trim.start = 0;
	to_trim.end = 0;
	len = ft_strlen(s);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && i < len)
	{
		to_trim.start++;
		i++;
	}
	if (to_trim.start == (int)ft_strlen(s))
	{
		to_trim.end = 0;
		return (to_trim);
	}
	i = len - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
	{
		to_trim.end++;
		i--;
	}
	return (to_trim);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	len;
	size_t	i;
	size_t	j;
	t_trim	to_trim;

	if (!s)
		return (NULL);
	to_trim = find_nb_to_trim(s);
	len = ft_strlen(s) - (to_trim.start + to_trim.end);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	i = to_trim.start;
	while (i < ft_strlen(s) - to_trim.end)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
