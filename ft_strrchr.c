/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:32:07 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/08 04:57:28 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)&s[i];
		i++;
	}
	if (*last == c)
		return (last);
	return (NULL);
}
