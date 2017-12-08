/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:45:45 by cmace             #+#    #+#             */
/*   Updated: 2017/11/16 19:05:26 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_init(size_t *i, size_t *v, int *nb)
{
	*i = 0;
	*v = 0;
	*nb = 0;
}

int				ft_atoi(const char *str)
{
	size_t	i;
	size_t	y;
	size_t	v;
	int		nb;

	ft_init(&i, &v, &nb);
	while (((str[i] >= 0 && str[i] <= 33) || str[i] == 127) && str[i] != '\e')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	y = i;
	while (str[v + i])
	{
		if (str[v + i] >= 48 && str[v + i] <= 57)
			nb = nb * 10 + (str[v + i] - 48);
		else
			break ;
		v++;
	}
	if (str[y - 1] == '-')
		nb = -nb;
	return (nb);
}
