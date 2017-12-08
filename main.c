/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:35:58 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 17:48:43 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putstr("usage : fillit [valid_file]\n");
	else
	{
		if (ft_readfile(argv[1]) == 1)
			return (1);
	}
	return (0);
}
