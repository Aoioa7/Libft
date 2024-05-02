/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:43:00 by aichida           #+#    #+#             */
/*   Updated: 2024/04/28 16:57:55 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*dst;

	n = ft_strlen(s1);
	dst = (char *)malloc((n + 1) * sizeof(char));
	if (dst = NULL)
		return (0);
	ft_memcpy(dst, s1, n);
	dst[n] = '\0';
	return (dst);
}
