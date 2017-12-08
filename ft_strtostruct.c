/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtostruct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:15:58 by cmace             #+#    #+#             */
/*   Updated: 2017/12/07 16:28:40 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_init(int *xmin, int *ymin, int *z, t_form *forms)
{
	*z = 0;
	*xmin = forms[0].p[0].x;
	*ymin = forms[0].p[0].y;
}

static t_form	*ft_replace_form(t_form *forms)
{
	int		xmin;
	int		ymin;
	int		z;

	ft_init(&xmin, &ymin, &z, forms);
	while (z < 4)
	{
		xmin = ft_valmin(forms->p[z].x, xmin);
		ymin = ft_valmin(forms->p[z].y, ymin);
		z++;
	}
	z = 0;
	while (z < 4)
	{
		forms->p[z].x = forms->p[z].x - xmin;
		forms->p[z].y = forms->p[z].y - ymin;
		z++;
	}
	return (forms);
}

static void		ft_init2(int *x, int *i, int *y, int *a)
{
	*x = 0;
	*i = 0;
	*y = 0;
	*a = 0;
}

t_form			*ft_strtostruct(char *str, char letter)
{
	int		t[4];
	t_form	*forms;

	if (((forms = (t_form*)malloc(sizeof(t_form))) == NULL) ||
	(forms->p = (t_point*)malloc(sizeof(t_point) * 4)) == NULL)
		return (NULL);
	ft_init2(&t[0], &t[1], &t[2], &t[3]);
	forms->letter = letter;
	while (t[3] <= 3)
	{
		if (str[t[1]] == '#')
		{
			forms->p[t[3]].x = t[0];
			forms->p[t[3]].y = t[2];
			t[3]++;
		}
		if (str[t[1]] == '\n')
		{
			t[0]++;
			t[2] = -1;
		}
		t[2]++;
		t[1]++;
	}
	return (ft_replace_form(forms));
}
