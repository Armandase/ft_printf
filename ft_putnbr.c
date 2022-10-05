/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:48:14 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 11:12:29 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"     

void	ft_putnbr(int nb, size_t *ret)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		*ret = *ret + 2;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		*ret = *ret + 1;
		nb *= -1;
	}	
	if (nb > 9)
	{
		ft_putnbr(nb / 10, ret);
	}
	ft_putchar((nb % 10) + '0');
	*ret = *ret + 1;
}
