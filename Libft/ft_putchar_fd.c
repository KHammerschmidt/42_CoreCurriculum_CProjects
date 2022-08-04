/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:37:08 by khammers          #+#    #+#             */
/*   Updated: 2022/08/04 11:23:48 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

/* Outputs character (c) to the given file desriptor. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}
