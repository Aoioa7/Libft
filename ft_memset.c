/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 09:34:23 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 11:25:00 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t size)
{
	unsigned char	*ret;

	ret = (unsigned char *)buf;
	while (size--)
	{
		*ret++ = (unsigned char)ch;
	}
	return (buf);
}
