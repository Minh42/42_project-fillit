/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structmeit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:07:17 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 11:37:51 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_form		*ft_structmeit(char *str, int nb_tetriminos)
{
	int		nb_caract;
	int		t[2];
	char	*tmp;
	char	letter;
	t_form	*forms;

	t[0] = 0;
	t[1] = 0;
	letter = 'A';
	nb_caract = nb_tetriminos * 20;
	if ((forms = (t_form*)malloc(sizeof(t_form) * nb_tetriminos)) == NULL)
		return (NULL);
	while (nb_caract > t[0])
	{
		if ((tmp = ft_strsub(str, t[0], 20)) == NULL)
			return (NULL);
		forms[t[1]] = *ft_strtostruct(tmp, letter);
		free(tmp);
		letter += 1;
		t[0] += 21;
		t[1]++;
	}
	return (forms);
}
