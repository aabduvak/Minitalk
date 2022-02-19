/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:42:23 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/21 21:01:19 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putnbr.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function is recursive and it prints the number to the terminal 
 * 
 * @param num - the number which will be printed on the screen
 * @param ret_val - the number of characters which is printed on the screen
 * @return ptr - first argument (blocks of memory)
 * 
 * @version 1.0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "ft_printf.h"

void	ft_putnbr(int num, int *ret_val)
{
	if (num < 0)
	{
		ft_putchar('-', ret_val);
		if (num == -2147483648)
		{
			ft_putchar('2', ret_val);
			ft_putnbr(147483648, ret_val);
			return ;
		}
		num = -num;
	}
	if (num > 9)
		ft_putnbr(num / 10, ret_val);
	ft_putchar(num % 10 + 48, ret_val);
}
