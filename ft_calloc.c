/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:18:48 by aichida           #+#    #+#             */
/*   Updated: 2024/06/18 05:13:11 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;

	if (!size || !count)
		return (malloc(0));
	if (SIZE_MAX / size < count)
		return (0);
	arr = (void *)malloc(count * size);
	if (!arr)
		return (0);
	ft_bzero(arr, count * size);
	return (arr);
}
