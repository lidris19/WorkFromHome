#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest,char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)

//// === Ex00 ===
{
    char str1[] = "hello";
    char str2[] = "world";
    char str3[] = "hello";
    char str4[] = "hell";
    
    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);
    
    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %d\n", result3);
    
    return (0);
}
//// ================================
//// ================================
//// === Ex01 ===
// {
//     char str1[] = "hello";
//     char str2[] = "world";
//     char str3[] = "hello";
//     char str4[] = "hell";
    
//     int result1 = ft_strncmp(str1, str2, 2);
//     int result2 = ft_strncmp(str1, str3, 5);
//     int result3 = ft_strncmp(str1, str4, 4);
    
//     printf("result1 = %d\n", result1);
//     printf("result2 = %d\n", result2);
//     printf("result3 = %d\n", result3);
    
//     return (0);
// }
//// ================================
//// ================================
//// === Ex02 ===
// {
//     char str1[100] = "hello";
//     char str2[100] = " world";
//     char str3[100] = "goodbye";
//     char str4[100] = "world ";

//     printf("Result1: %s\n", ft_strcat(str1, str2));
//     printf("Result2: %s\n", ft_strcat(str4, str3));

//     return (0);
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
//     char str1[100] = "hello";
//     char str2[100] = " world";
//     char str3[100] = "morning";
//     char str4[100] = "good ";

//     printf("Result1: %s\n", ft_strncat(str1, str2, 3));
//     printf("Result2: %s\n", ft_strncat(str4, str3, 7));

//     return (0);
// }
//// ================================
//// ================================
//// === Ex04 ===
// {
//     char str1[100] = "hello world";
//     char str2[100] = "world";
//     char str3[100] = "world!";
//     char str4[100] = "llo";

//     printf("Result1: %s\n", ft_strstr(str1, str2));
//     printf("Result2: %s\n", ft_strstr(str1, str3));
//     printf("Result3: %s\n", ft_strstr(str1, str4));

//     return (0);
// }
//// ================================
//// ================================
//// === Ex05 ===
// {
//     char dest[15] = "hello";
//     char *src = "world";
//     unsigned int size = 15;

//     printf("Return value: %d\n", ft_strlcat(dest, src, size));
//     printf("Result: %s\n", dest);

//     return 0;
// }
//// ================================
//// ================================
//// === Ex06 ===

//// ================================
//// ================================
//// === Ex07 ===

//// ================================
//// ================================
// // === Ex08 ===

//// ================================
//// ================================
// // === Ex09 ===

//// ================================
//// ================================
// // === Ex10 ===

//// ================================
//// ================================
// === Ex11 ===

//// ================================
//// ================================
// === Ex12 ===

//// ================================
//// ================================