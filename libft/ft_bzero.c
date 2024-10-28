/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:01:17 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/26 23:17:01 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_bzero(void *s,size_t n)
{
	int index = 0;
	unsigned char *cs = (char*)s;
	while (index < n)
		cs[index++] = '\0';
	return (cs);
}
int main(void)
{
	char c[] = "hello world";
	size_t n = 10;
	char *rs = (char *) ft_bzero(c,n);
	printf("%s\n",rs);
	return 0;
}

