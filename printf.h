/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:38:19 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/05 12:41:56 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_atoi_base(char *str, char *base, size_t *ret);
void    ft_print_addr(unsigned long long addr, size_t *ret);
int		ft_printf(const char *s, ...);
void    ft_putchar(char c);
void    ft_putnbr(int nb, size_t *ret);
void    ft_putnbr_base(int nb, char *base, size_t *ret);
void    ft_putstr(char  *s, size_t  *ret);
void    *ft_calloc(size_t nmemb, size_t size);
void    ft_bzero(void *s, size_t n);

#endif
