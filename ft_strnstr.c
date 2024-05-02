/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:24:26 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 14:51:26 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!find[0])
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == find[j] && (i + j) < n)
		{
			if (!str[i + j] && !find[j])
				return ((char *)&str[i]);
			j++;
		}
		if (!find[j])
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
