void test_ft_memcmp() {
    // Test case 1: Identical memory blocks
    const char str1[] = "Hello, World!";
    const char str2[] = "Hello, World!";
    int result1 = ft_memcmp(str1, str2, strlen(str1));
    printf("Test 1 - Expected: 0, Got: %d\n", result1);

    // Test case 2: Different memory blocks (different content)
    const char str3[] = "Hello, World!";
    const char str4[] = "Hello, world!";
    int result2 = ft_memcmp(str3, str4, strlen(str3));
    printf("Test 2 - Expected: a positive value, Got: %d\n", result2);

    // Test case 3: Different memory blocks (different length)
    const char str5[] = "Hello";
    const char str6[] = "Hello, World!";
    int result3 = ft_memcmp(str5, str6, strlen(str5));
    printf("Test 3 - Expected: 0, Got: %d\n", result3);

    // Test case 4: Compare with zero bytes
    int result4 = ft_memcmp(str1, str2, 0);
    printf("Test 4 - Expected: 0, Got: %d\n", result4);

    // Test case 5: Compare at the end of a memory block
    const char str7[] = "Hello, World!";
    const char str8[] = "Hello, World!";
    int result5 = ft_memcmp(str7, str8, 13); // Full length
    printf("Test 5 - Expected: 0, Got: %d\n", result5);

    // Test case 6: Compare different lengths with leading bytes equal
    const char str9[] = "Hello";
    const char str10[] = "Hellp";
    int result6 = ft_memcmp(str9, str10, 5);
    printf("Test 6 - Expected: a negative value, Got: %d\n", result6);

    // Test case 7: Different byte values
    unsigned char data1[] = { 0x01, 0x02, 0x03 };
    unsigned char data2[] = { 0x01, 0x02, 0x04 };
    int result7 = ft_memcmp(data1, data2, 3);
    printf("Test 7 - Expected: a negative value, Got: %d\n", result7);
}

int main() {
    test_ft_memcmp();
    return 0;
}
