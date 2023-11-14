/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:57:11 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/13 08:12:13 by mwojtasi         ###   ########.fr       */
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

char	**ft_split(char const *str, char sep)
{
	int		i;
	int		j;
	int		start;
	char	**split;

	i = 0;
	j = 0;
	start = 0;
	split = malloc(sizeof(char *) * (num_charptr(str, sep) + 1));
	if (split == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (const char)sep)
		{
			if (i > start)
				split[j++] = copy_str(str, start, i - start);
			start = i + 1;
		}
		i++;
	}
	if (i > start)
		split[j++] = copy_str(str, start, i - start);
	split[j] = NULL;
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