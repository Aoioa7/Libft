/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:14:17 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 12:01:34 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *charset)
{
	char	*s2;
	size_t	start;
	size_t	end;

	if (!s1 || !charset)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(charset, s1[start]))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	while (ft_strchr(charset, s1[end]))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	if (!s2)
		return (0);
	return (s2);
}
