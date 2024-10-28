/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:42:38 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/26 22:34:08 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s,int c,size_t n)
{
	int index = 0;
	unsigned char *cs = (void *)s;
	while (index < n)
		cs[index++] = c;
	return (cs);
}
