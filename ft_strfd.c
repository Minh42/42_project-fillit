/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <cmace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 11:35:44 by mpham             #+#    #+#             */
/*   Updated: 2017/12/08 11:38:14 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strfd(char *file)
{
	int		size;
	int		fd;
	char	*str;

	if ((size = ft_sizefd(file)) == -1)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (NULL);
	}
	if (size == 0)
		return (0);
	if (!(str = (char *)malloc(sizeof(*str) * (size))))
		return (NULL);
	read(fd, str, size);
	str[size] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (NULL);
	}
	return (str);
}
