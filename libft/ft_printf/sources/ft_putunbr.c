/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:01:43 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/21 21:15:16 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putunbr.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function prints given number to terminal
 * NOTE: it only accepts positive numbers
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

void	ft_putunbr(unsigned int num, int *ret_val)
{
	char	s[10];
	int		i;

	i = 0;
	if (num == 0)
		ft_putchar('0', ret_val);
	while (num)
	{
		s[i++] = num % 10 + '0';
		num /= 10;
	}
	while (i--)
		ft_putchar(*(s + i), ret_val);
}
