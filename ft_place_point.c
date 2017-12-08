/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:03:44 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 17:57:33 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**ft_place_point(char **result, int taillex, int tailley)
{
	int i;
	int y;

	i = 0;
	while (tailley > i)
	{
		y = 0;
		while (y < taillex - 1)
		{
			result[i][y] = '.';
			y++;
		}
		result[i][y] = '\0';
		i++;
	}
	return (result);
}
