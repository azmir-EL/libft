/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:39:28 by eazmir            #+#    #+#             */
/*   Updated: 2024/10/26 17:26:06 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *cs1 = (char *)s1;
	const unsigned char *cs2 = (char *)s2;
	int index = 0;
	while (cs1[index] == cs2[index] && index < n)
		index++;
	return (cs1[index] - cs2[index]);
}
// Test function
void test_ft_memcmp() {
    printf("Test 1: %d (Expected: 0)\n", ft_memcmp("abc", "abc", 3));
    printf("Test 2: %d (Expected: 0)\n", ft_memcmp("abc", "abc", 0));
    printf("Test 3: %d (Expected: -1)\n", ft_memcmp("abc", "abd", 3));
    printf("Test 4: %d (Expected: 1)\n", ft_memcmp("abd", "abc", 3));
    printf("Test 5: %d (Expected: 0)\n", ft_memcmp("", "", 0));
    printf("Test 6: %d (Expected: 1)\n", ft_memcmp("a", "b", 1));
    printf("Test 7: %d (Expected: -1)\n", ft_memcmp("abc", "abC", 3));
    printf("Test 8: %d (Expected: 1)\n", ft_memcmp("abc", "ab", 3));
}

int main() {
    test_ft_memcmp();
    return 0;
}
