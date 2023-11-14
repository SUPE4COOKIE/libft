/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:57:11 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/14 19:27:50 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_charptr(const char *str, char sep)
{
	int	count;

	count = 0;
	if (*str && *str != sep)
		count++;
	while (*str)
	{
		if (*str == sep && (*(str + 1) && *(str + 1) != sep))
			count++;
		str++;
	}
	return (count);
}

static char	*copy_str(const char *str, int start, int len)
{
	char	*str_copy;
	int		i;

	str_copy = malloc(len + 1);
	if (str_copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_copy[i] = str[start + i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

static void free_str(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char **fill(char **split, char const *str, char sep)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] == (const char)sep)
		{
			if (i > start)
			{
				split[j] = copy_str(str, start, i - start);
				if (!split[j++])
					return (NULL);
			}
			start = i + 1;
		}
		i++;
	}
	if (i > start)
	{
		split[j] = copy_str(str, start, i - start);
		if (!split[j++])
			return (NULL);
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *str, char sep)
{
	char	**split;

	split = malloc(sizeof(char *) * (num_charptr(str, sep) + 1));
	if (split == NULL)
		return (NULL);
	if (!fill(split, str, sep))
	{
		free_str(split);
		return (NULL);
	}
	return (split);
}

/*#include <stdio.h>
int	main(void) {
	const char test[] = "bonjour,aurevoir:merci::bonsoir::";
	char sep = ':';
	char **result = ft_split(test, sep);
	int i = 0;
	while (result[i]) {
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/