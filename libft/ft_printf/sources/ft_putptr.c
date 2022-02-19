/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:49:59 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/21 23:56:16 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putptr.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function prints num by hexidecimal numerical base
 * 
 * @param num - the number which will be printed on the screen
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

void	ft_putptr(unsigned long num, int *ret_val)
{
	if (num == 0)
	{
		ft_putstr("0x0", ret_val);
		return ;
	}
	ft_putstr("0x", ret_val);
	ft_putstr(ft_convert(num, "0123456789abcdef"), ret_val);
}
