/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:10:55 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/09 16:33:10 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int is_trim_char(const char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
        if (set[i++] == c)
            return (1);
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char	*result;
	int		i;

    result = malloc(ft_strlen((char *)s1));
	i = 0;
	if (!result)
		return (NULL);
    while (*s1)
	{
		if (!is_trim_char(*s1, set))
			result[i++] = (char)*s1;
		s1++;
	}
	return (result);
}
