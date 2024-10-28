/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:56:32 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/28 02:28:20 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst,const void *src,size_t n)
{
	size_t index;
	index  = 0;
	unsigned char *cdst = (char *)dst;
	unsigned char *csrc = (char *)src;
	if (!cdst || !csrc)
		return (NULL);
	if (cdst < csrc)
	{
		while (index < n)
			cdst[index++] = csrc[index];
	}
	else
	{
		index = n;
		while (index > 0)
		{
			cdst[index-1] = csrc[index-1];
			index--;
		}
	}
	return (cdst);
}
