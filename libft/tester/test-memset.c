#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n) {
    int index = 0;
    unsigned char *cs = (unsigned char *)s;
    while (index < n)
        cs[index++] = c;
    return cs;
}

int main() {
    // Impossible Test 1: Floating-Point Array Initialization
    printf("Test 1: Floating-Point Array Initialization\n");
    float floatArray[5];
    ft_memset(floatArray, 1, sizeof(floatArray));  // Attempt to set each float to 1.0 (won’t work as expected)
    for (int i = 0; i < 5; i++) {
        printf("%f ", floatArray[i]);  // Expect incorrect values
    }
    printf("\n\n");

    // Impossible Test 2: Pointer Array Initialization to NULL
    printf("Test 2: Pointer Array Initialization\n");
    int *ptrArray[5];
    ft_memset(ptrArray, 0, sizeof(ptrArray));  // Attempt to set each pointer to NULL
    for (int i = 0; i < 5; i++) {
        printf("%p ", (void*)ptrArray[i]);  // May not be NULL on all systems
    }
    printf("\n\n");

    // Impossible Test 3: Integer Array Initialization to -128
    printf("Test 3: Integer Array Initialization to -128\n");
    int intArray[5];
    ft_memset(intArray, -128, sizeof(intArray));  // Attempt to set each integer to -128 (incorrect values expected)
    for (int i = 0; i < 5; i++) {
        printf("%d ", intArray[i]);  // Expect incorrect values
    }
    printf("\n\n");

    // Impossible Test 4: Const Array Modification
    printf("Test 4: Const Array Modification\n");
    const int constArray[5] = {1, 2, 3, 4, 5};
    ft_memset((void*)constArray, 0, sizeof(constArray));  // This will likely cause a runtime error
    for (int i = 0; i < 5; i++) {
        printf("%d ", constArray[i]);
    }
    printf("\n");

    return 0;
}

