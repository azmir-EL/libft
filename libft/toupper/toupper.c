/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:28:05 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/25 15:32:20 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}