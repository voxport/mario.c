#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;

    do
    {
        n = get_int("Please enter the number of floors betwwen 1 and 8: \n"); //получаем число от пользователя
        if (n < 1 || n > 8) //проверяем на соответствие число от 1 до 8
            printf("Enter the number beetwen 1 and 8\n"); //если число больше или меньше, сообщаем об ошибке
    } while (n < 1 || n > 8);

    for (int i = 1; i <= n; i++)
{
    // печатаем пробелы слева
    for (int j = 0; j < n - i; j++)
    {
        printf(" ");
    }

    // печатаем первую пирамиду #
    for (int k = 0; k < i; k++)
    {
        printf("#");
    }

    // печатаем два пробела между пирамидами
    printf("  ");

    // печатаем вторую пирамиду #
    for (int l = 0; l < i; l++)
    {
        printf("#");
    }

    // переход на новую строку
    printf("\n");
}
}