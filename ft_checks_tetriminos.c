/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_tetriminos.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:46:13 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 17:29:39 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_check_backslashn(int size)
{
	if (size % 21 != 20)
		return (-1);
	return (1);
}

static int		ft_check_tetrimino1(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 4;
	if (ft_strlen(str) < 21)
		return (1);
	while (i < 20)
	{
		if (str[i] == '#' || str[i] == '.')
			j++;
		if (j > 4)
			return (-1);
		if (str[i] != '\n' && i == k)
			return (-1);
		if (str[i] == '\n' && i == k)
		{
			j = 0;
			k = k + 5;
		}
		i++;
	}
	return (1);
}

static int		ft_check_tetrimino2(char *str)
{
	int t[4];

	t[0] = 0;
	t[1] = 0;
	t[2] = 0;
	t[3] = 0;
	while (str[t[0]] != '\0')
	{
		if (str[t[0]] == '#' || str[t[0]] == '.' ||
		str[t[0]] == '\n' || str[t[0]] == '\0')
		{
			if (str[t[0]] == '#')
				t[1]++;
			if (str[t[0]] == '.')
				t[2]++;
			if (str[t[0]] == '\n')
				t[3]++;
		}
		else
			return (-1);
		t[0]++;
	}
	if (t[1] != 4 || t[2] != 12 || t[3] != 4)
		return (-1);
	return (1);
}

static int		ft_check_agencement(t_form *forms)
{
	char	joint;
	int		i;
	int		j;

	i = 0;
	joint = 16;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i != j && ((forms[0].p[i].x + 1 == forms[0].p[j].x &&
	forms[0].p[i].y == forms[0].p[j].y) || (forms[0].p[i].x - 1 ==
	forms[0].p[j].x && forms[0].p[i].y == forms[0].p[j].y) || (forms[0].p[i].x
	== forms[0].p[j].x && forms[0].p[i].y + 1 == forms[0].p[j].y) || (forms[0].
	p[i].x == forms[0].p[j].x && forms[0].p[i].y - 1 == forms[0].p[j].y)))
				joint--;
			j++;
		}
		i++;
	}
	if (joint <= 10)
		return (1);
	return (-1);
}

int				ft_checks_tetriminos(char *file)
{
	char	*str;
	char	*sub_str;
	int		i;
	int		size;
	t_form	*forms;

	i = 0;
	str = ft_strfd(file);
	size = ft_sizefd(file);
	if (ft_check_backslashn(size) == -1)
		return (-1);
	while (i < size)
	{
		sub_str = ft_strsub(str, i, 20);
		if (ft_check_tetrimino1(sub_str) == -1)
			return (-1);
		if (ft_check_tetrimino2(sub_str) == -1)
			return (-1);
		forms = ft_strtostruct(sub_str, 'A');
		if (ft_check_agencement(forms) == -1)
			return (-1);
		i = i + 21;
	}
	return (1);
}
