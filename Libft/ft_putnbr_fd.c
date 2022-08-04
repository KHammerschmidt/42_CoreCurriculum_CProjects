/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:31:43 by khammers          #+#    #+#             */
/*   Updated: 2022/08/04 11:23:45 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

/* Outputs an integer (n) to the given file descriptor. */
void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nbr;

	nbr = (long)n;
	c = 0;
	if (nbr == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nbr, fd);
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		c = '0' + nbr;
		ft_putchar_fd(c, fd);
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		c = '0' + (nbr % 10);
		ft_putchar_fd(c, fd);
	}
}
