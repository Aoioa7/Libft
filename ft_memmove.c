/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:54:21 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 13:33:39 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	char	*d;
	char	*s;

	if (!dst && !src)
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	if (d == s)
		return (dst);
	if (s < d && d < s + size)
		while (size--)
			d[size] = s[size];
	else
		while (size--)
			*(d++) = *(s++);
	return (dst);
}
