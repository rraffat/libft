/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:59:01 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 07:57:54 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*sr;

	i = 0;
	sr = (unsigned char *)s;
	while (i < n)
	{
		sr[i] = 0;
		i++;
	}
	s = sr;
}
