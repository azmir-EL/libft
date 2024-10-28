/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:34:59 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/25 20:21:45 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int fisprint(int c)
{
	if (c >= 1 && c <= 32 || c == 27)
		return (0);
	return (1);
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	printf("%d\n",isprint(' '));
	return (0);
}
