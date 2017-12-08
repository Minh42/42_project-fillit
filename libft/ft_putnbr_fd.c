/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:56:42 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 11:34:05 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 10 && n >= 0)
		ft_putchar_fd(n + 48, fd);
	else if (n > -10 && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd(-n + 48, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		if (n < 0)
			ft_putchar_fd(-(n % 10) + 48, fd);
		else
			ft_putchar_fd((n % 10) + 48, fd);
	}
}
