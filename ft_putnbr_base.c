/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:20:56 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/10 11:18:58 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(unsigned int nb, char *base, size_t *ret)
{
	unsigned int	size;
	unsigned long	number;

	number = nb;
	size = ft_strlen(base);
	if (number < size)
		ft_putnchar(base[number % size], ret);
	else
	{
		ft_putnbr_base((number / size), base, ret);
		ft_putnbr_base((number % size), base, ret);
	}
}
