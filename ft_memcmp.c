/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:58:53 by aichida           #+#    #+#             */
/*   Updated: 2024/04/28 17:16:42 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	while ((((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) && i < n - 1)
	{
		i++;
	}
	return ((int)(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
}
