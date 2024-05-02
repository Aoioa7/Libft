/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:47:05 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 14:38:08 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	while (size)
	{
		*(char *)dst = *(char *)src;
		src++;
		dst++;
		size--;
	}
	return (ret);
}
