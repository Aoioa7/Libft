/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:25:02 by aichida           #+#    #+#             */
/*   Updated: 2024/05/10 13:27:56 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			s += word_len(s, c);
		}
		else
			s++;
	}
	return (count);
}

static void	*multi_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
		free(strs[i++]);
	free(strs);
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;
	int		count;

	if (!s)
		return (0);
	count = count_words(s, c);
	strs = malloc(sizeof(char *) * (count + 1));
	if (!strs)
		return (0);
	strs[count] = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			strs[i] = ft_substr(s, 0, word_len(s, c));
			if (!strs[i++])
				return (multi_free(strs));
			s += word_len(s, c);
		}
		else
			s++;
	}
	return (strs);
}
