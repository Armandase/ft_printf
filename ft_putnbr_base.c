/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:20:56 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 11:08:44 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base, size_t *ret)
{
	unsigned int	size;
	unsigned int	number;

	number = nb;
	size = ft_strlen(base);
	if (size <= 1 || ft_basecheck(base) == 0)
		return ;
	else if (nb < 0)
	{
		ft_putchar('-');
		number *= -1;
		*ret = *ret + 1;
	}
	if (number < size)
	{
		ft_putchar(base[number % size]);
		*ret = *ret + 1;
	}
	else
	{
		ft_putnbr_base((number / size), base, ret);
		ft_putnbr_base((number % size), base, ret);
	}
}
