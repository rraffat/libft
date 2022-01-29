/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 20:42:53 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/26 07:38:16 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)b == (unsigned char)c)
		{
			return ((void *)b);
		}
		i++;
		b++;
	}
	return (0);
}
