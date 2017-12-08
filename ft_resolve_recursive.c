/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_recursive.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 17:14:18 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 13:22:56 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_replace_point(t_form *f, char **r, int t[2], int s)
{
	r[f[s].p[0].x + t[0]][f[s].p[0].y + t[1]] = '.';
	r[f[s].p[1].x + t[0]][f[s].p[1].y + t[1]] = '.';
	r[f[s].p[2].x + t[0]][f[s].p[2].y + t[1]] = '.';
	r[f[s].p[3].x + t[0]][f[s].p[3].y + t[1]] = '.';
}

static int		ft_ifplacable(t_form *f, char **r, int t[2], int s)
{
	if (r[f[s].p[0].x + t[0]][f[s].p[0].y + t[1]] == '.' && r[f[s].
	p[1].x + t[0]][f[s].p[1].y + t[1]] == '.' && r[f[s].p[2].x + t[0]][f[s].
	p[2].y + t[1]] == '.' && r[f[s].p[3].x + t[0]][f[s].p[3].y + t[1]] == '.')
		return (1);
	return (0);
}

char			**ft_resolve_recursive(t_form *f, char **r, int s, int nb_tetri)
{
	int t[2];

	t[0] = -1;
	if (s >= nb_tetri)
		return (r);
	while (t[0]++ < (int)ft_strlen(r[0]))
	{
		t[1] = -1;
		while (t[1]++ < (int)ft_strlen(r[0]))
		{
			if ((f[s].p[0].x + t[0] < (int)ft_strlen(r[0])
	&& f[s].p[1].x + t[0] < (int)ft_strlen(r[0]) && f[s].p[2].x + t[0]
	< (int)ft_strlen(r[0]) && f[s].p[3].x + t[0] < (int)ft_strlen(r[0])))
			{
				if (ft_ifplacable(f, r, t, s) == 1)
				{
					ft_place_tetri(f, &(*r), t, s);
					if (ft_resolve_recursive(f, &(*r), s + 1, nb_tetri) != 0)
						return (r);
					ft_replace_point(f, &(*r), t, s);
				}
			}
		}
	}
	return (0);
}
