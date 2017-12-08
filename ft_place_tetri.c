/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:21:43 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 17:11:11 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_place_tetri(t_form *forms, char **result, int t[2], int s)
{
	result[forms[s].p[0].x + t[0]][forms[s].p[0].y + t[1]] =
		forms[s].letter;
	result[forms[s].p[1].x + t[0]][forms[s].p[1].y + t[1]] =
		forms[s].letter;
	result[forms[s].p[2].x + t[0]][forms[s].p[2].y + t[1]] =
		forms[s].letter;
	result[forms[s].p[3].x + t[0]][forms[s].p[3].y + t[1]] =
		forms[s].letter;
}
