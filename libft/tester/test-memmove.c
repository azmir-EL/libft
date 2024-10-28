#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n) {
    size_t index;
    index = 0;
    unsigned char *cdst = (unsigned char *)dst;
    unsigned char *csrc = (unsigned char *)src;
    if (!cdst || !csrc)
        return (NULL);
    if (cdst < csrc) {
        while (index < n)
            cdst[index++] = csrc[index];
    } else {
        while (index < n) {
            cdst[index] = csrc[index];
            index++;
        }
    }
    return (cdst);
}

int main(void) {
    // Test 1: Basic overlapping
    char buffer1[] = "hello world";
    char buffer1_copy[20]; // For standard memmove comparison
    strcpy(buffer1_copy, buffer1);
    
    ft_memmove(buffer1 + 7, buffer1, 5);
    memmove(buffer1_copy + 7, buffer1_copy, 5);
    
    printf("Test 1 - ft_memmove: %s\n", buffer1);          // Expected: "hello hello"
    printf("Test 1 - memmove: %s\n", buffer1_copy);        // Expected: "hello hello"

    // Test 2: Non-overlapping regions
    char buffer2[20] = "hello world";
    char buffer2_copy[20];
    strcpy(buffer2_copy, buffer2);
    
    ft_memmove(buffer2 + 6, buffer2, 6);  // Move "hello "
    memmove(buffer2_copy + 6, buffer2_copy, 6);
    
    printf("Test 2 - ft_memmove: %s\n", buffer2);          // Expected: "hello hello world"
    printf("Test 2 - memmove: %s\n", buffer2_copy);        // Expected: "hello hello world"

    // Test 3: Overlapping regions (destination before source)
    char buffer3[] = "hello world";
    char buffer3_copy[20];
    strcpy(buffer3_copy, buffer3);
    
    ft_memmove(buffer3, buffer3 + 6, 5);  // Move "world" to the front
    memmove(buffer3_copy, buffer3_copy + 6, 5);
    
    printf("Test 3 - ft_memmove: %s\n", buffer3);          // Expected: "world"
    printf("Test 3 - memmove: %s\n", buffer3_copy);        // Expected: "world"

    // Test 4: Full overlap (same memory area)
    char buffer4[] = "Overlapping Test";
    char buffer4_copy[20];
    strcpy(buffer4_copy, buffer4);
    
    ft_memmove(buffer4, buffer4, 17);  // Move same memory area
    memmove(buffer4_copy, buffer4_copy, 17);
    
    printf("Test 4 - ft_memmove: %s\n", buffer4);          // Expected: "Overlapping Test"
    printf("Test 4 - memmove: %s\n", buffer4_copy);        // Expected: "Overlapping Test"

    // Test 5: Moving a single character
    char buffer5[20] = "hello";
    char buffer5_copy[20];
    strcpy(buffer5_copy, buffer5);
    
    ft_memmove(buffer5 + 1, buffer5, 1);  // Move 'h' to the second position
    memmove(buffer5_copy + 1, buffer5_copy, 1);
    
    printf("Test 5 - ft_memmove: %s\n", buffer5);          // Expected: "hhllo"
    printf("Test 5 - memmove: %s\n", buffer5_copy);        // Expected: "hhllo"

    // Test 6: Zero bytes
    char buffer6[] = "hello world";
    char buffer6_copy[20];
    strcpy(buffer6_copy, buffer6);
    
    ft_memmove(buffer6 + 1, buffer6, 0);  // Move zero bytes
    memmove(buffer6_copy + 1, buffer6_copy, 0);
    
    printf("Test 6 - ft_memmove: %s\n", buffer6);          // Expected: "hello world"
    printf("Test 6 - memmove: %s\n", buffer6_copy);        // Expected: "hello world"

    // Test 7: Edge case with empty string
    char buffer7[20] = "";
    char buffer7_copy[20] = "";
    
    ft_memmove(buffer7 + 0, buffer7, 0);  // Move from empty string
    memmove(buffer7_copy + 0, buffer7_copy, 0);
    
    printf("Test 7 - ft_memmove: %s\n", buffer7);          // Expected: ""
    printf("Test 7 - memmove: %s\n", buffer7_copy);        // Expected: ""

    return 0;
}

