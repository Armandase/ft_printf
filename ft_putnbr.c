/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:48:14 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/10 11:18:27 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"     

void	ft_putnbr(int nb, size_t *ret)
{
	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_putnchar('-', ret);
		ft_putnchar('2', ret);
	}
	if (nb < 0)
	{
		ft_putnchar('-', ret);
		nb *= -1;
	}	
	if (nb > 9)
	{
		ft_putnbr(nb / 10, ret);
	}
	ft_putnchar((nb % 10) + '0', ret);
}
