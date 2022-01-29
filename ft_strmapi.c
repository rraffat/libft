/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 07:08:05 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 07:08:17 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_copy;

	i = 0;
	str_copy = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (!s || !str_copy)
		return (NULL);
	while (s[i] != '\0')
	{
		str_copy[i] = f(i, s[i]);
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
