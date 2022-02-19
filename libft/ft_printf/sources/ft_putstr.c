/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <abdulaziz.yosk@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:53:48 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/20 23:53:48 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function ft_putstr() prints given string or character on the screen
 * if parameter is not given prints (null).
 * 
 * @param s - the string which will be printed on the screen
 * @param ret_val - the number of characters which is printed on the screen
 * @return - the function does not return any value
 * 
 * @version 1.0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "ft_printf.h"

void	ft_putchar(char c, int *ret_val)
{
	*ret_val += write(1, &c, 1);
}

void	ft_putstr(char *s, int *ret_val)
{
	if (!s)
	{
		ft_putstr("(null)", ret_val);
		return ;
	}
	while (*s)
		*ret_val += write(1, s++, 1);
}
