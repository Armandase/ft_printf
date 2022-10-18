/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:38:19 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/10 11:11:30 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

void	ft_atoi_base(char *str, char *base, size_t *ret);
void	ft_print_addr(unsigned long addr, size_t *ret);
int		ft_printf(const char *s, ...);
void	ft_putnchar(char c, size_t *ret);
void	ft_putnbr(int nb, size_t *ret);
void	ft_putnbr_base(unsigned int nb, char *base, size_t *ret);
void	ft_putstr(char *s, size_t *ret);

#endif
