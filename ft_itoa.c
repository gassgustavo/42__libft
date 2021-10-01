/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoraes- <gmoraes-l@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 23:12:27 by gmoraes-          #+#    #+#             */
/*   Updated: 2021/10/01 18:11:47 by gmoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nlen(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	ntochr(int n)
{
	if (n < 10)
		return (n + 48);
	else
		(n_to_chr(n % 10));
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = nlen(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
		str[0] = '-';
	while (len > 0)
	{
		str[len] = ntochar(n);
		len--;
	}
}