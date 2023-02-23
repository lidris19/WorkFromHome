#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src);
int     *ft_range(int min, int max);
int     ft_ultimate_range(int **range, int min, int max);
char    *ft_strjoin(int size, char **strs, char *sep);
char 	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(void)

//// === Ex00 ===
// {
// 	char *str = "Hello, world!";
// 	char *copy = ft_strdup(str);

// 	if (copy == NULL)
// 	{
// 		printf("Error: ft_strdup returned NULL.\n");
// 		return (1);
// 	}

// 	printf("Original string: %s\n", str);
// 	printf("Copied string: %s\n", copy);

// 	free(copy);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex01 ===
// {
//     int min = 0;
//     int max = 10;

//     int *arr = ft_range(min, max);

//     if (!arr)
//     {
//         printf("ft_range returned null pointer\n");
//         return 0;
//     }

//     for (int i = 0; i < max - min; i++)
//     {
//         printf("%d\n", arr[i]);
//     }

//     free(arr);
//     return 0;
// }
//// ================================
//// ================================
//// === Ex02 ===
// {
//     int *arr;
//     int len;
//     int i;

//     len = ft_ultimate_range(&arr, 5, 26);
//     if (arr == NULL)
//     {
//         printf("ft_ultimate_range failed: returned NULL\n");
//         return (1);
//     }
//     printf("Array contents: ");
//     i = 0;
//     while (i < len)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     printf("\n");
//     free(arr);
//     return (0);
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
// 	char	*strs[3];
// 	char	*sep = ",";
// 	char	*result;

// 	strs[0] = "apple";
// 	strs[1] = "banana";
// 	strs[2] = "cherry";

// 	result = ft_strjoin(3, strs, sep);

// 	printf("%s\n", result);
// 	free(result);

// 	return (0);
// }
//// ================================
//// ================================
//// === Ex04 ===
{
    char *nbr = "101010";
    char *base_from = "01";
    char *base_to = "0123456789";

    char *result = ft_convert_base(nbr, base_from, base_to);

    printf("%s base %s is %s base %s\n", nbr, base_from, result, base_to);

    free(result);
    return 0;
}
//// ================================
//// ================================
//// === Ex05 ===

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