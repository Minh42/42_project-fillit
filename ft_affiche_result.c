/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche_result.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:26:10 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 18:00:40 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_affiche_result(char **result)
{
	size_t	i;
	size_t	max;

	max = ft_strlen(result[0]);
	i = 0;
	while (i < max)
	{
		ft_putstr(result[i]);
		ft_putchar('\n');
		i++;
	}
}
