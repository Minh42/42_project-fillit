/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:35:58 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 17:59:10 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_readfile(char *namefile)
{
	if (ft_checks_tetriminos(namefile) == 1)
		ft_resolve(ft_strfd(namefile), ft_get_nb_tetrimino(namefile));
	else
	{
		ft_putstr("error\n");
		return (1);
	}
	return (0);
}
