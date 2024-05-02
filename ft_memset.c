/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:34:23 by aichida           #+#    #+#             */
/*   Updated: 2024/04/24 09:45:57 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t size)
{
	void	*ret;

	ret = buf;
	while (size)
	{
		*(char *)buf = (unsigned char)ch;
		buf++;
		size--;
	}
	return (ret);
}
