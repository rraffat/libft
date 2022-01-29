/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:08:09 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/26 07:38:46 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	le;

	i = 0;
	l = ft_strlen(dst);
	le = ft_strlen(src);
	if (l > dstsize)
		l = dstsize;
	if (dstsize > 0 && l < dstsize - 1)
	{
		while ((l + i < (dstsize - 1)) && (src[i] != '\0'))
		{
			dst[l + i] = src[i];
			i++;
		}
		dst[l + i] = '\0';
	}
	return (l + le);
}
