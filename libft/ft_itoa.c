/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:04:50 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 12:50:55 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_isnegativ(int *negatif, int *nombre)
{
	if (*nombre < 0)
	{
		*nombre = -*nombre;
		*negatif = 1;
	}
}

static	void	ft_init(int *i, int *tmpnb, int n, int *negatif)
{
	*i = 2;
	*tmpnb = n;
	*negatif = 0;
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		tmpnb;
	int		negatif;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_init(&i, &tmpnb, n, &negatif);
	ft_isnegativ(&negatif, &n);
	while (tmpnb /= 10)
		i++;
	i += negatif;
	str = (char *)malloc(sizeof(i));
	if (str == NULL)
		return (NULL);
	str[--i] = '\0';
	while (i--)
	{
		str[i] = n % 10 + 48;
		n = n / 10;
	}
	if (negatif)
		str[0] = '-';
	return (str);
}
