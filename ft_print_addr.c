/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:37:15 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/10 10:55:25 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_addr(unsigned long addr, size_t *ret)
{
	char	charaddr;

	if (addr != 0)
	{
		ft_addr(addr / 16, ret);
		if (addr % 16 < 10)
			charaddr = addr % 16 + '0';
		else
			charaddr = (addr % 16) - 10 + 'a';
		write(1, &charaddr, 1);
		*ret = *ret + 1;
	}
}

void	ft_print_addr(unsigned long addr, size_t *ret)
{
	if (!addr)
	{
		write (1, "(nil)", 5);
		*ret = *ret + 5;
		return ;
	}
	write(1, "0x", 2);
	*ret = *ret + 2;
	ft_addr(addr, ret);
}
