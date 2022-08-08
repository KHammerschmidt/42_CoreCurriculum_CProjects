/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 15:36:46 by khammers          #+#    #+#             */
/*   Updated: 2022/08/08 16:05:39 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Checks if the parameter is either a digit or a letter (upper- & lowercase).
If 'int' is none of those returns 0, otherwise 1. */
int	ft_isalnum(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	return (0);
}
