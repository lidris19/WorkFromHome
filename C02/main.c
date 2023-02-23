#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	    ft_str_is_alpha(char *str);
int     ft_str_is_numeric(char *str);
int     ft_str_is_lowercase(char *str);
int     ft_str_is_uppercase(char *str);
int     ft_str_is_printable(char *str);
char    *ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char    *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void    ft_putstr_non_printable(char *str);
void *ft_print_memory(void *addr, unsigned int size);
size_t ft_sizeof(char *arr);

int main(void)

//// === Ex00 ===
// {
// 	char	src[100] = "Hello, World !";
// 	char	dest[100];

// 	ft_strcpy(dest, src);
// 	printf("src: %s\ndest: %s\n", src, dest);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex01 ===
// {
// 	char src[100] = "Hello, World!";
// 	char dest[100];

// 	ft_strncpy(dest, src, 6);
// 	printf("src: %s\ndest: %s\n", src, dest);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex02 ===
// {
// 	char str1[] = "TestOne";
// 	char str2[] = "Test2";
// 	char str3[] = "";
// 	char str4[] = "Test three !";

// 	if (ft_str_is_alpha(str1))
// 	{
// 		printf("%s contains only alphabetical characters.\n", str1);
// 	} else {
// 		printf("%s contains non_alphabetical characters.\n", str1);
// 	}

// 	if (ft_str_is_alpha(str2))
// 	{
// 		printf("%s contains only alphabetical characters.\n", str2);
// 	} else {
// 		printf("%s contains non_alphabetical characters.\n", str2);
// 	}

// 	if (ft_str_is_alpha(str3))
// 	{
// 		printf("%s contains only alphabetical characters.\n", str3);
// 	} else {
// 		printf("%s contains non_alphabetical characters.\n", str3);
// 	}

// 	if (ft_str_is_alpha(str4))
// 	{
// 		printf("%s contains only alphabetical characters.\n", str4);
// 	} else {
// 		printf("%s contains non_alphabetical characters.\n", str4);
// 	}
	
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
// 	char str1[] = "TestOne";
// 	char str2[] = "Test2";
// 	char str3[] = "";
// 	char str4[] = "1234567890";

// 	if (ft_str_is_numeric(str1))
// 	{
// 		printf("%s contains only digits.\n", str1);
// 	} else {
// 		printf("%s contains non-digit characters.\n", str1);
// 	}

// 	if (ft_str_is_numeric(str2))
// 	{
// 		printf("%s contains only digits.\n", str2);
// 	} else {
// 		printf("%s contains non-digit characters.\n", str2);
// 	}

// 	if (ft_str_is_numeric(str3))
// 	{
// 		printf("%s contains only digits.\n", str3);
// 	} else {
// 		printf("%s contains non-digit characters.\n", str3);
// 	}

// 	if (ft_str_is_numeric(str4))
// 	{
// 		printf("%s contains only digits.\n", str4);
// 	} else {
// 		printf("%s contains non-digit characters.\n", str4);
// 	}

// 	return (0);
// }
//// ================================
//// ================================
//// === Ex04 ===
// {
// 	char str1[] = "TESTONE";
// 	char str2[] = "Test2!";
// 	char str3[] = "";
// 	char str4[] = "testthree";

// 	if (ft_str_is_lowercase(str1))
// 	{
// 		printf("%s contains only lowercase characters.\n", str1);
// 	} else {
// 		printf("%s contains non_lowercase characters.\n", str1);
// 	}

// 	if (ft_str_is_lowercase(str2))
// 	{
// 		printf("%s contains only lowercase characters.\n", str2);
// 	} else {
// 		printf("%s contains non_lowercase characters.\n", str2);
// 	}

// 	if (ft_str_is_lowercase(str3))
// 	{
// 		printf("%s contains only lowercase characters.\n", str3);
// 	} else {
// 		printf("%s contains non_lowercase characters.\n", str3);
// 	}

// 	if (ft_str_is_lowercase(str4))
// 	{
// 		printf("%s contains only lowercase characters.\n", str4);
// 	} else {
// 		printf("%s contains non_lowercase characters.\n", str4);
// 	}
	
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex05 ===
// {
// 	char str1[] = "testone";
// 	char str2[] = "Test 2!";
// 	char str3[] = "";
// 	char str4[] = "TESTTHREE";

// 	if (ft_str_is_uppercase(str1))
// 	{
// 		printf("%s contains only uppercase characters.\n", str1);
// 	} else {
// 		printf("%s contains non_uppercase characters.\n", str1);
// 	}

// 	if (ft_str_is_uppercase(str2))
// 	{
// 		printf("%s contains only uppercase characters.\n", str2);
// 	} else {
// 		printf("%s contains non_uppercase characters.\n", str2);
// 	}

// 	if (ft_str_is_uppercase(str3))
// 	{
// 		printf("%s contains only uppercase characters.\n", str3);
// 	} else {
// 		printf("%s contains non_uppercase characters.\n", str3);
// 	}

// 	if (ft_str_is_uppercase(str4))
// 	{
// 		printf("%s contains only uppercase characters.\n", str4);
// 	} else {
// 		printf("%s contains non_uppercase characters.\n", str4);
// 	}
	
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex06 ===
// {
//     char str1[] = "Hello\n";
//     char str2[] = "This string is printable.";

//     if (ft_str_is_printable(str1))
//         printf("'%s' is printable.\n", str1);
//     else
//         printf("'%s' is not printable.\n", str1);

//     if (ft_str_is_printable(str2))
//         printf("'%s' is printable.\n", str2);
//     else
//         printf("'%s' is not printable.\n", str2);

//     return 0;
// }
//// ================================
//// ================================
//// === Ex07 ===
// {
//     char str[] = "This is a Test String!";
//     printf("Original string: %s\n", str);
//     printf("Uppercase string: %s\n", ft_strupcase(str));
//     return 0;
// }
//// ================================
//// ================================
// // === Ex08 ===
// {
//     char str[] = "This is a Test String!";
//     printf("Original string: %s\n", str);
//     printf("Lowercase string: %s\n", ft_strlowcase(str));
//     return 0;
// }
//// ================================
//// ================================
// // === Ex09 ===
// {
//     char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
//     printf("Original string: %s\n", str);
//     printf("Capitalized string: %s\n", ft_strcapitalize(str));
//     return 0;
// }
//// ================================
//// ================================
// // === Ex10 ===
// {
//     char src[] = "Hello, world!";
//     char dest[6];

//     unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

//     printf("src: %s\n", src);
//     printf("dest: %s\n", dest);
//     printf("length of src: %u\n", (unsigned int)(sizeof(src) / sizeof(src[0])));
//     printf("length of dest: %u\n", (unsigned int)(sizeof(dest) / sizeof(dest[0])));
//     printf("length returned by ft_strlcpy: %u\n", len);

//     return 0;
// }
//// ================================
//// ================================
// === Ex11 ===
// {
//     char *str = "Coucou\ntu \rvas\t bien ?";
//     ft_putstr_non_printable(str);
//     return 0;
// }
//// ================================
//// ================================
// === Ex12 ===
// {
// 	char	str[] = "H";

// 	ft_print_memory(str, sizeof(str));
// 	return (0);
// }
//// ================================
//// ================================