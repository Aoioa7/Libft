/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:54:21 by aichida           #+#    #+#             */
/*   Updated: 2024/04/28 15:18:29 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (!(src < dst))
	{
		while (size--)
			*(char *)dst++ = *(char *)src++;
	}
	else
	{
		src += size;
		dst += size;
		while (size--)
			*(char *)dst-- = *(char *)src--;
	}
	return (ret);
}
