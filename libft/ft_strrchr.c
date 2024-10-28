/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:33:41 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/26 14:46:47 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *s,int c)
{
	int index = 0;
	if (c == '\0' || s == NULL)
		return (NULL);
	while (s[index])
		index++;
	index -= 1;
	while (s[index])
	{
		if (s[index] == c)
			return (s + index);
		index--;
	}
	return (0);
}
