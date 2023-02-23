#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

int main(void)

//// === Ex00 ===
// {
//     int testCases[] = { -6, 0, 1, 5, 10, -3 };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int result = ft_iterative_factorial(testCases[i]);
//         printf("ft_iterative_factorial(%d) = %d\n", testCases[i], result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex01 ===
// {
//     int testCases[] = { 0, 1, 5, 10, -3 };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int result = ft_recursive_factorial(testCases[i]);
//         printf("ft_recursive_factorial(%d) = %d\n", testCases[i], result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex02 ===
// {
//     int testCases[][2] = { {2, 3}, {0, 5}, {5, 0}, {7, -2}, {2, 10} };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int nb = testCases[i][0];
//         int power = testCases[i][1];
//         int result = ft_iterative_power(nb, power);
//         printf("%d^%d = %d\n", nb, power, result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
//     int testCases[][2] = { {2, 3}, {0, 5}, {5, 0}, {7, -2}, {2, 10} };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int nb = testCases[i][0];
//         int power = testCases[i][1];
//         int result = ft_recursive_power(nb, power);
//         printf("%d^%d = %d\n", nb, power, result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex04 ===
// {
//     int testCases[] = { -1, 0, 1, 2, 3, 6, 25 };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int index = testCases[i];
//         int result = ft_fibonacci(index);
//         printf("Fibonacci(%d) = %d\n", index, result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex05 ===
// {
//     int testCases[] = { -1, 0, 1, 4, 8, 9, 15, 16, 25, 36, 16000000 };
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int nb = testCases[i];
//         int result = ft_sqrt(nb);
//         printf("sqrt(%d) = %d\n", nb, result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex06 ===
// {
//     int testCases[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 23, 169, 2147483647};
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int nb = testCases[i];
//         int result = ft_is_prime(nb);
//         printf("%d is %sprime\n", nb, result ? "" : "not ");
//     }
    
//     return 0;
// }
//// ================================
//// ================================
//// === Ex07 ===
// {
//     int testCases[] = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 21, 2147483647};
//     int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
//     for (int i = 0; i < numTestCases; i++) {
//         int nb = testCases[i];
//         int result = ft_find_next_prime(nb);
//         printf("Next prime number after %d is %d\n", nb, result);
//     }
    
//     return 0;
// }
//// ================================
//// ================================
// // === Ex08 ===

//// ================================
//// ================================