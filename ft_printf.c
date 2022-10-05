/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:04:53 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 13:11:26 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putunsigned(unsigned int nb, size_t *ret)
{
    if (nb > 9)
    {
        ft_putunsigned(nb / 10, ret);
    }
    ft_putchar((nb % 10) + '0');
	*ret = *ret + 1;
}

void	ft_convert(const char *s, size_t i, size_t *ret,  va_list args)
{
	if (s[i] == 'c')
	{
		write(1, &va_arg(args, char *)[0], 1);
		ret = ret + 1;
	}
	else if (s[i] == 's')
		ft_putstr(va_arg(args, char *), ret);
	else if (s[i] == 'p')
		ft_print_addr(va_arg(args, unsigned long long), ret);
	else if (s[i] == 'd' || s[i] == 'i')
		ft_putnbr_base(va_arg(args, int), "0123456789", ret);
	else if (s[i] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), ret);
	else if (s[i] == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef", ret);
	else if (s[i] == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", ret);
	else if (s[i] == '%')
	{
		write(1, "%", 1);
		*ret = *ret + 1;
	}
}
#include <stdio.h>
int ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;
	size_t	*ret;

	i = 0;
	ret = ft_calloc(2, sizeof(size_t) * 2);
	*ret = 1;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			ft_convert(s, ++i, ret, args);
			printf("\n\t !! %d apres convert !!\t \n", (int)*ret);
		}
		else
		{
			write(1, &s[i], 1);
			*ret = *ret + 1;
		}
		i++;
	}
	va_end(args);
	return ((int)*ret - 1);
}
