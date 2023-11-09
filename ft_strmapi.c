/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:04:07 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/09 17:34:07 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	
	i = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[i])
	{
		*result = f(i, s[i]);
		result++;
		i++;
	}
	*result = '\0';
	return (result);
}

/*char minusone(unsigned int i, char c)
{
	return (c - 1);
}

#include <stdio.h>
int main(void)
{
	const char s[] = "bcdefghij";
	printf("%s",ft_strmapi(s, minusone));
}*/