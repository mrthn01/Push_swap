/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murathanelcuman <murathanelcuman@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:31:54 by murathanelc       #+#    #+#             */
/*   Updated: 2024/03/15 23:26:48 by murathanelc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	ft_strlen(const char *str)
{
	size_t	length_of_string;

	length_of_string = 0;
	while (str[length_of_string] != '\0')
		length_of_string++;
	return (length_of_string);
}

static char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	length;
	size_t	i;

	i = 0;
	length = ft_strlen(s1);
	s2 = (char *)malloc(length + 1);
	if (!s2)
		return (NULL);
	while (i < length)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	while (*(s + start + i))
		i++;
	if (len > i)
		len = i;
	str = malloc(sizeof(char)*(len+1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	str = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				s++;
				len++;		
			}
			str[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	str[i] = 0;
	return (str);
}
