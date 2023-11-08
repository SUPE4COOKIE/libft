/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:20:32 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/07 20:08:36 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lsize;

	i = 0;
	lsize = ft_strlen((char *)little) - 1;
	if (!little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((little[j] == big[i + j]) && (i + j) < len)
		{
			if (j == lsize)
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
