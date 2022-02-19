/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42ISTANBUL.COM.TR>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:38:45 by aabduvak          #+#    #+#             */
/*   Updated: 2022/01/21 21:17:00 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlen.c
 * @author Abdulaziz Abduvakhobov (abdulaziz.yosk@gmail.com)
 * @brief The function computes the length of the string s. 
 * The ft_strnlen() function attempts to compute the length of s,
 * but never scans beyond the first maxlen bytes of s.
 * 
 * @param str - the string which the function computes length
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

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
