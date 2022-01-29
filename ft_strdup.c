/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 05:32:16 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 05:46:48 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	n;

	if (!s1)
		return (NULL);
	s2 = (char *)malloc(ft_strlen(s1) + 1);
	n = 0;
	if (!s2)
		return (NULL);
	while (n < ft_strlen(s1))
	{
		s2[n] = ((char *)s1)[n];
		n++;
	}
	s2[n] = '\0';
	return (s2);
}
