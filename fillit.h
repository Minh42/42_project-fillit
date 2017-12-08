/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 13:15:02 by cmace             #+#    #+#             */
/*   Updated: 2017/12/08 13:24:22 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <stdio.h>

typedef	struct	s_point
{
	int		x;
	int		y;
}				t_point;

typedef	struct	s_form
{
	char	letter;
	t_point	*p;
}				t_form;

typedef struct	s_compteur
{
	int x;
	int y;
	int z;
	int w;
}				t_compteur;

int				ft_readfile(char *namefile);
int				ft_get_nb_tetrimino(char *file);
int				ft_sizefd(char *file);
int				ft_checks_tetriminos(char *file);
int				ft_sizetab(int nb_tetriminos);

void			ft_resolve(char *str, int nb_tetriminos);
void			ft_affiche_result(char **result);
void			ft_place_tetri(t_form *forms, char **result, int t[2], int s);

char			*ft_strfd(char *file);
char			**ft_place_point(char **result, int taillex, int tailley);
char			**ft_resolve_recursive(t_form *f, char **r,
		int s, int nb_tetri);

t_form			*ft_strtostruct(char *str, char letter);
t_form			*ft_structmeit(char *str, int nb_tetriminos);

#endif
