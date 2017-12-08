/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:51:51 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 15:58:34 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static char	**ft_while(t_form *forms, char **result, int t[2], int nb_tetri)
{
	while (ft_resolve_recursive(forms, &(*result), t[2], nb_tetri) == 0)
	{
		free(result);
		t[1] = -1;
		t[0]++;
		result = (char**)malloc(sizeof(char*) * (t[3] + t[0]));
		while (t[3] + t[0] > t[1]++)
			if ((result[t[1]] =
			(char *)malloc(sizeof(char) * (t[3] + 1 + t[0]))) == NULL)
				return (NULL);
		result = ft_place_point(result, t[3] + 1 + t[0], t[3] + t[0]);
	}
	return (result);
}

void		ft_resolve(char *str, int nb_tetriminos)
{
	int		t[4];
	char	**result;
	t_form	*forms;

	t[0] = 0;
	t[3] = ft_sizetab(nb_tetriminos);
	t[1] = -1;
	forms = ft_structmeit(str, nb_tetriminos);
	t[2] = 0;
	if ((result = (char**)malloc(sizeof(char*) * (t[3]))) == NULL)
		return ;
	while (t[3] > t[1]++)
	{
		if ((result[t[1]] = (char *)malloc(sizeof(char) * (t[3] + 1))) == NULL)
			return ;
	}
	result = ft_place_point(result, t[3] + 1, t[3]);
	if ((result = ft_while(forms, result, t, nb_tetriminos)) == NULL)
		return ;
	ft_affiche_result(result);
}
