/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:32:01 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/28 02:46:21 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(char *s,char *c,size_t n)
{
	int i = 0;
	int j = 0;
	while (s[i] || c[j])
	{
		if (s[i] == c[j])
			j++;
		if (c[j] == '\0')
			return (s + i);
		else
			i++;
		i++;
		j++;
	}
	return (0);
}
int main(void)
{
	char s[] = "hello world";
	char c[] = "l";
	printf("%s\n",strnstr(s,c,11));
}
