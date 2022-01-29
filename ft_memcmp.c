/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 04:35:06 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/26 07:38:24 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			n;
	unsigned char	*sr1;
	unsigned char	*sr2;

	sr1 = (unsigned char *)s1;
	sr2 = (unsigned char *)s2;
	n = 0;
	if (len == 0)
		return (0);
	while (len--)
	{
		if (sr1[n] != sr2[n])
			return (sr1[n] - sr2[n]);
		n++;
	}
	return (0);
}
