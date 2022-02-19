/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:32:34 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/22 00:06:35 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c, int *ret_val);
void	ft_putstr(char *str, int *ret_val);
void	ft_putnbr(int num, int *ret_val);
void	*ft_memset(void *ptr, int c, size_t size);
void	ft_putptr(unsigned long num, int *ret_val);
void	ft_putunbr(unsigned int num, int *ret_val);

size_t	ft_strlen(const char *str);

char	*ft_convert(size_t num, char *repres);

int		ft_printf(const char *str, ...);

#endif