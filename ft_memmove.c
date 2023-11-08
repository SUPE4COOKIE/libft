/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 04:48:01 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/07 15:19:50 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cdest;
	unsigned char	*csrc;

	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	if (cdest < csrc)
	{
		i = 0;
		while (n--)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			cdest[n] = csrc[n];
		}
	}
	return (dest);
}
