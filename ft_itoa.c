/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:41:35 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/09 17:03:51 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int number_len(long int num)
{
	size_t len;
	
	len = 0;
	while (num / 10 > 0)
	{
		len++;
		num /= 10;
	}
	len++;
	return (len);
}

char *ft_itoa(int n)
{
	long int	num;
	int			sign;
	char		*result;
	size_t		num_len;

	num = n;
	sign = 1;
	num_len = number_len(num);
	if (num < 0)
	{
		num *= -1;
		sign = -1;
	}
	if (!sign)
		result = malloc((num_len + 2) * sizeof(char));
	else
		result = malloc((num_len + 1) * sizeof(char));
	/*while(num)
	{
		result += 
	}*/
		
	
	
}

#include <stdio.h>
int main(void)
{
	printf("%d",number_len(-50));
}