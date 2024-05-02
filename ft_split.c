/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichida <aichida@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:25:02 by aichida           #+#    #+#             */
/*   Updated: 2024/05/02 14:25:50 by aichida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**multi_free(char **strs, int n)
{
	while (n >= 0)
	{
		free(strs[n]);
		n--;
	}
	free(strs);
	return (0);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static void	put_word(char *word, const char *str, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len - 1 >= 0)
	{
		word[j] = str[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return ;
}

static char	**split_words(const char *str, char c, char **strs, int words_num)
{
	int	i;
	int	n;
	int	word_len;

	i = 0;
	n = 0;
	word_len = 0;
	while (n < words_num)
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			i++;
			word_len++;
		}
		strs[n] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!strs)
			return (multi_free(strs, n));
		put_word(strs[n], str, i, word_len);
		word_len = 0;
		n++;
	}
	strs[n] = 0;
	return (strs);
}

char	**ft_split(const char *str, char c)
{
	char			**strs;
	unsigned int	words_num;

	if (!str)
		return (0);
	words_num = count_words(str, c);
	strs = (char **)malloc(sizeof(char *) * (words_num + 1));
	if (!strs)
		return (0);
	strs = split_words(str, c, strs, words_num);
	return (strs);
}
