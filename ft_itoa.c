/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:25:09 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 12:13:50 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	res_len(long long x)
{
	int	len;

	len = 0;
	if (x <= 0)
		len = 1;
	while (x != 0)
	{
		len++;
		x /= 10;
	}
	return (len);
}

static char	*itoa_help(char *res, long long x, int len)
{
	while (x > 0)
	{
		res[len--] = '0' + (x % 10);
		x /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long long	x;

	x = n;
	len = res_len(x);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!(res))
		return (0);
	res[len--] = '\0';
	if (x == 0)
		res[0] = '0';
	if (x < 0)
	{
		x *= -1;
		res[0] = '-';
	}
	res = itoa_help(res, x, len);
	return (res);
}
