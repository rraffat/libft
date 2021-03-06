/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraffat <rraffat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 07:05:59 by rraffat           #+#    #+#             */
/*   Updated: 2021/12/27 07:06:54 by rraffat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int num);

char	*ft_itoa(int n)
{
	char			*str;
	size_t			intlen;
	unsigned int	num_copy;

	intlen = ft_intlen(n);
	num_copy = n;
	if (n < 0)
	{
		num_copy = -1 * n;
		intlen++;
	}
	str = (char *)malloc(sizeof(char) * intlen + 1);
	ft_bzero(str, intlen + 1);
	if (!str)
		return (NULL);
	str[--intlen] = num_copy % 10 + '0';
	num_copy = num_copy / 10;
	while (num_copy)
	{
		str[--intlen] = num_copy % 10 + '0';
		num_copy = num_copy / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}

static size_t	ft_intlen(int num)
{
	size_t	i;

	i = 1;
	num = num / 10;
	while (num)
	{
		i++;
		num = num / 10;
	}
	return (i);
}
