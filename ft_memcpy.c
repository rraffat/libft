/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 07:53:37 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/22 14:27:11 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstr;
	const char	*srcr;

	if ((dst == src) || n == 0)
	{
		return (dst);
	}
	if (!dst && !src)
	{
		return (0);
	}
	dstr = (char *)dst;
	srcr = (const char *)src;
	while (n--)
	{
		dstr[n] = srcr[n];
	}
	dst = dstr;
	return (dst);
}
