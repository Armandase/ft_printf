/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:37:15 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 11:14:59 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_addr(unsigned long long addr, size_t *ret)
{
	char    charaddr;

	if (addr != 0)
	{
		ft_print_addr(addr / 16, ret);
		if (addr % 16 < 10)
			charaddr = addr % 16 + '0';
		else
			charaddr = (addr % 16) - 10 + 'a';
		write(1, &charaddr, 1);
		*ret = *ret + 1;
	}
}
