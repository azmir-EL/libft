/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 20:01:38 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/27 21:03:10 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dest,const void *src,size_t n)
{
	unsigned char *cdest = (char *)dest;
	unsigned char *csrc = (char *)src;
	int index = 0;
	if (cdest == NULL || csrc == NULL)
		return (NULL);
	while (csrc[index] && index < n)
		cdest[index++] = csrc[index];
	cdest[index] = '\0';
	return (cdest);
}
