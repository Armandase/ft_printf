/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:04:53 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/10 11:23:30 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, size_t *ret)
{
	if (nb > 9)
	{
		ft_putunsigned(nb / 10, ret);
	}
	ft_putnchar((nb % 10) + '0', ret);
}

void	ft_convert(const char *s, size_t i, size_t *ret, va_list args)
{
	if (s[i] == 'c')
		ft_putnchar(va_arg(args, int), ret);
	else if (s[i] == 's')
		ft_putstr(va_arg(args, char *), ret);
	else if (s[i] == 'p')
		ft_print_addr(va_arg(args, unsigned long), ret);
	else if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr(va_arg(args, int), ret);
	else if (s[i] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), ret);
	else if (s[i] == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", ret);
	else if (s[i] == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", ret);
	else if (s[i] == '%')
		ft_putnchar('%', ret);
	else
	{
		write(1, &s[i - 1], 2);
		*ret = *ret + 2;
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	size_t	*ret;
	size_t	cpy;

	i = 0;
	ret = &cpy;
	cpy = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			ft_convert(s, ++i, ret, args);
		else
			ft_putnchar(s[i], ret);
		if (*ret == 0 && !s[i])
			return ((int)*ret);
		i++;
	}
	va_end(args);
	return ((int)*ret);
}
