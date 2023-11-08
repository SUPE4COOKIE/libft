/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwojtasi <mwojtasi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:32:20 by mwojtasi          #+#    #+#             */
/*   Updated: 2023/11/07 19:34:35 by mwojtasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

size_t			ft_strlen(char *s);
int				ft_isdigit(unsigned char c);
void			ft_bzero(void *s, size_t n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
#endif