/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:14:17 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 09:28:06 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	checked_len(const char *s1, const char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (check(s1[i], charset))
			len++;
		i++;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *charset)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	if (!s1 || !charset)
		return (0);
	len = checked_len(s1, charset);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (check(s1[i], charset))
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '0';
	return (res);
}
