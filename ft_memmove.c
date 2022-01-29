/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 14:30:51 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 08:09:50 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstr;
	char	*srcr;

	dstr = (char *)dst;
	srcr = (char *)src;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (len--)
		{
			*(dstr + len) = *(srcr + len);
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*dstr++ = *srcr++;
		}
		return (dst);
	}
}
