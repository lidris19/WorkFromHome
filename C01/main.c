#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	    ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int main(void)

//// === Ex00 ===
// {
// 	int	number;

// 	number = 0;
// 	ft_ft(&number);
// 	printf("%d\n", number);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex01 ===
{
	int	number;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;	

	number = 0;
	ptr1 = &number;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(&ptr8);
	printf("%d\n", number);
	return (0);
}
//// ================================
//// ================================
//// === Ex02 ===
// {
// 	int	x;	
// 	int	y;

// 	x = 42;
// 	y = 73;
// 	ft_swap(&x, &y);
// 	printf("x = %d, y = %d\n", x, y);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
// 	int	x;
// 	int	y;
// 	int	result_div;
// 	int	result_mod;

// 	x = 0;
// 	y = 0;
// 	ft_div_mod(x, y, &result_div, &result_mod);
// 	printf("%d divided by %d is :\n", x, y);
// 	printf("%d with a remainder of %d.\n", result_div, result_mod);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex04 ===
// {
// 	int	x;
// 	int	y;

// 	x = 42;
// 	y = 6;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d divided by %d is %d with a remainder of %d.\n", 42, 6, x, y);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex05 ===
// {
// 	char	*str = "Hello, world!";

// 	ft_putstr(str);
// 	return (0);
// }
//// ================================
//// ================================
// === Ex06 ===
// {
// 	int		len;
// 	char	*str = "Quick brown fox jumps over";

// 	len = ft_strlen(str);
// 	printf("The length of the string is %d.\n", len);
// 	return (0);
// }
//// ================================
//// ================================
//// === Ex07 ===
// {
// 	int	size;
// 	int	i;
// 	int	tab[] = {1, 2, 3, 4, 5};

// 	size = sizeof(tab) / sizeof(tab[0]);
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
//// ================================
//// ================================
// // === Ex08 ===
// {
// 	int	size;
// 	int	i;
// 	int	tab[] = {3, 2, 1};

// 	size = sizeof(tab) / sizeof(tab[0]);
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }