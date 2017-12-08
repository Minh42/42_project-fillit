/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizefd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:05:54 by minh              #+#    #+#             */
/*   Updated: 2017/12/08 11:38:10 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_sizefd(char *file)
{
	int		size;
	int		fd;
	char	*buf;

	size = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (1);
	}
	if (!(buf = (char *)malloc(sizeof(*buf) * 1)))
		return (1);
	while (read(fd, buf, 1))
		size++;
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (1);
	}
	return (size);
}
