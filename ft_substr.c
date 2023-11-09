/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:28:08 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/09 14:21:35 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	i;

	result = malloc(len * sizeof(char) + 1);
	slen = ft_strlen((char *)s);
	if (!result || start > slen)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		result[i] = (char)s[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
