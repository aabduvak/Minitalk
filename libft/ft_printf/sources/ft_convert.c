/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 18:00:08 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/21 20:55:37 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_convert.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The ft_convert() function converts num to related numerical base
 * 
 * @param num - the data which will be converted to different numerical base
 * @param repres - the numerical base:
 * "01" 				- binary
 * "0123456789abcdef"	- hexidecimal
 * @return ptr - address of converted string
 * 
 * @version 1.0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "ft_printf.h"

char	*ft_convert(size_t num, char *repres)
{
	static char	buffer[50];
	char		*ptr;
	int			base;

	base = ft_strlen(repres);
	ptr = &buffer[49];
	*ptr = '\0';
	*--ptr = repres[num % base];
	num /= base;
	while (num != 0)
	{
		*--ptr = repres[num % base];
		num /= base;
	}
	return (ptr);
}
