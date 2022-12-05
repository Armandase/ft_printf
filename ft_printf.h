/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:38:19 by adamiens          #+#    #+#             */
/*   Updated: 2022/11/02 15:21:57 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_atoi_base(char *str, char *base, size_t *ret);
void	ft_fprint_addr(unsigned long addr, size_t *ret);
int		ft_printf(const char *s, ...);
void	ft_putfchar(char c, size_t *ret);
void	ft_putfnbr(int nb, size_t *ret);
void	ft_putfnbr_base(unsigned int nb, char *base, size_t *ret);
void	ft_putfstr(char *s, size_t *ret);

#endif
