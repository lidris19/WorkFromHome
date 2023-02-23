#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);
int ft_atoi_base(char *str, char *base);

int main(void)

//// === Ex00 ===
// {
//     char *str = "Hello, world!";
//     int len = ft_strlen(str);
//     printf("Length of string '%s': %d\n", str, len);
//     return 0;
// }
//// ================================
//// ================================
//// === Ex01 ===
// {
//     ft_putstr("Hello, world!\n");
//     return 0;
// }
//// ================================
//// ================================
//// === Ex02 ===
// {
//     ft_putnbr(42);
//     write(1, "\n", 1);
//     ft_putnbr(-123);
//     write(1, "\n", 1);
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     ft_putnbr(2147483647);
//     write(1, "\n", 1);
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);

//     return (0);
// }
//// ================================
//// ================================
//// === Ex03 ===
// {
//     char str[] = "  ---+--+1234ab567";
//     int result = ft_atoi(str);
//     printf("%d\n", result);
//     return 0;
// }
//// ================================
//// ================================
//// === Ex04 ===
{
    ft_putnbr_base(42, "01"); // expects 101010
    write(1, "\n", 1);
    ft_putnbr_base(-42, "01"); // expects -101010
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789"); // expects 42
    write(1, "\n", 1);
    ft_putnbr_base(-42, "0123456789"); // expects -42
    write(1, "\n", 1);
    ft_putnbr_base(16, "0123456789ABCDEF"); // expects 10
    write(1, "\n", 1);
    ft_putnbr_base(-16, "0123456789ABCDEF"); // expects -10
    write(1, "\n", 1);
    ft_putnbr_base(12345, "poneyvif"); // expects eppfo
    write(1, "\n", 1);
    ft_putnbr_base(-12345, "poneyvif"); // expects -eppfo
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789+"); // expects nothing to be displayed
    write(1, "\n", 1);
    ft_putnbr_base(42, "01+"); // expects nothing to be displayed
    write(1, "\n", 1);
    ft_putnbr_base(42, ""); // expects nothing to be displayed
    return (0);
}
//// ================================
//// ================================
//// === Ex05 ===
// {
//     char *str1 = "101010";
//     char *base1 = "01";
//     printf("%s in base %s is: %d\n", str1, base1, ft_atoi_base(str1, base1));

//     char *str2 = "42";
//     char *base2 = "0123456789";
//     printf("%s in base %s is: %d\n", str2, base2, ft_atoi_base(str2, base2));

//     char *str3 = "eppfo";
//     char *base3 = "poneyvif";
//     printf("%s in base %s is: %d\n", str3, base3, ft_atoi_base(str3, base3));

//     char *str4 = "-42";
//     char *base4 = "0123456789";
//     printf("%s in base %s is: %d\n", str4, base4, ft_atoi_base(str4, base4));

//     char *str5 = "4t2";
//     char *base5 = "0123456789";
//     printf("%s in base %s is: %d\n", str5, base5, ft_atoi_base(str5, base5));

//     return 0;
// }
//// ================================
//// ================================