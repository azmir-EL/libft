#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *cs1 = (const unsigned char *)s1; // Correct pointer type
    const unsigned char *cs2 = (const unsigned char *)s2; // Correct pointer type
    size_t i = 0; // Initialize index properly

    while (i < n && cs1[i] == cs2[i]) {
        i++;
    }

    if (i == n) {
        return 0; // If all n bytes are equal
    }
    return cs1[i] - cs2[i]; // Return the difference
}

// Test function
void test_ft_memcmp() {
    const char *tests[][3] = {
        {"abc", "abc", "3"},
        {"abc", "abc", "0"},
        {"abc", "abd", "3"},
        {"abd", "abc", "3"},
        {"", "", "0"},
        {"a", "b", "1"},
        {"abc", "abC", "3"},
        {"abc", "ab", "3"},
    };

    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); i++) {
        const char *s1 = tests[i][0];
        const char *s2 = tests[i][1];
        size_t n = (size_t)atoi(tests[i][2]);

        int result_ft = ft_memcmp(s1, s2, n);
        int result_std = memcmp(s1, s2, n);

        printf("Test %zu:\n", i + 1);
        printf("ft_memcmp: %d, memcmp: %d\n", result_ft, result_std);
        printf("Match: %s\n\n", result_ft == result_std ? "Yes" : "No");
    }
}

int main() {
    test_ft_memcmp();
    return 0;
}

