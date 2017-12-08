/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmace <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:56:42 by cmace             #+#    #+#             */
/*   Updated: 2017/11/17 11:21:03 by cmace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
		ft_putchar(nb + 48);
	else if (nb > -10 && nb < 0)
	{
		ft_putchar('-');
		ft_putchar(-nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		if (nb < 0)
			ft_putchar(-(nb % 10) + 48);
		else
			ft_putchar((nb % 10) + 48);
	}
}
