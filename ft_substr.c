/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 06:47:12 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 06:50:55 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;

	if (start > ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if ((start + len) > ft_strlen(s))
	{
		sub = (char *) ft_calloc(ft_strlen(s) - start + 1, sizeof(char));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, ft_strlen(s) - start + 1);
		return (sub);
	}
	sub = (char *) ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
