/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:11:43 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 12:38:07 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	s_len;

	if (!s)
		return (0);
	if (!s[0])
		return (ft_strdup(""));
	s_len = ft_strlen(s);
	if (start > s_len - 1)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (0);
	ft_memcpy(s2, (s + start), len);
	s2[len] = '\0';
	return (s2);
}
