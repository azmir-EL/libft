/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:31:22 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/26 16:37:54 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int index = 0;
	unsigned char *cs = (char *)s;
	while (cs[index])
	{
		if (cs[index] == (unsigned char)c)
			return (cs + index);
		index++;
	}
	return (NULL);
}
