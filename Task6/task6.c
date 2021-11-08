#include <stdio.h>
#include <math.h> 
#include <curses.h> 
#include <stdlib.h> 
#include "func.h"

int main(void)
{
    _Bool b = 1;
    while (b==1)
    {
    printf("Меню:\n");
    printf("1. Задание 1\n");
    printf("5. Задание 5\n");
    printf("6. Выход \n");
    printf("Выберите номер задания: ");
    switch (_getch())
    {
    case '1':
    {
        printf("Задание 1:\n ");
        double x, result;
        printf("x = ");
        scanf("%lf", &x);
        f(&x,&result);
        printf("f = %.4lf\n\n", result);
        break;
    }
    case '5':
    {
        printf("Задание 5:\n ");
        int n;
        int arr[n];
        sortStackArray(arr,n);
        break;
    }
    case '6':
    {
        b = 0;
        break;
    }
    default:
    {
        printf("\nНеверное значение.\n");;
        break;
    }
    }
    } 
    return 0;
}