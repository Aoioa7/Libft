/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:22:08 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 09:29:06 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char ch, int sig, long ans)
{
	if (ans > LONG_MAX / 10)
	{
		if (sig == 1)
			return (1);
		return (-1);
	}
	else if (ans == LONG_MAX / 10)
	{
		if (sig == 1 && (ch == '8' || ch == '9'))
			return (1);
		if (sig == -1 && (ch == '9'))
			return (-1);
	}
	return (0);
}

long	ft_strtol(const char *str, int sig)
{
	long	ans;
	int		n;

	ans = 0;
	n = 0;
	while (ft_isdigit(str[n]))
	{
		if (check(str[n], sig, ans) == 1)
			return (LONG_MAX);
		else if (check(str[n], sig, ans) == -1)
			return (LONG_MIN);
		ans *= 10;
		ans += str[n] - '0';
		n++;
	}
	return (sig * ans);
}

int	ft_atoi(const char *str)
{
	int	sig;

	sig = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
	{
		sig *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	return ((int)ft_strtol(str, sig));
}
