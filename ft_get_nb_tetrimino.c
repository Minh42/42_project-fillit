/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_nb_tetrimino.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:42:52 by minh              #+#    #+#             */
/*   Updated: 2017/12/08 15:55:06 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_get_nb_tetrimino(char *file)
{
	int		i;
	int		nb_tetri;
	char	*str;

	str = ft_strfd(file);
	i = 0;
	nb_tetri = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
			nb_tetri++;
		i++;
	}
	if (nb_tetri > 26)
		return (-1);
	return (nb_tetri);
}
