/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khammers <khammers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:00:24 by khammers          #+#    #+#             */
/*   Updated: 2022/08/08 16:05:39 by khammers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies len bytes from string src to string dst. The two strings may overlap;
Copies in a non-destructive manner, returns the original value of dst. */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (src == NULL && dst == NULL)
		return (dst);
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
