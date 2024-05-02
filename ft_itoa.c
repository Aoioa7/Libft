/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:25:09 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 10:05:11 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	res_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*itoa_help(char *res, int n, long len)
{
	while (n > 0)
	{
		res[len--] = '0' + (n % 10);
		n /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	len;

	len = res_len(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!(res))
		return (0);
	res[len--] = '\0';
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	res = itoa_help(res, n, len);
	return (res);
}
