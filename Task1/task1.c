#include <stdio.h>
#include <math.h> 
#include <curses.h> 
#include <stdlib.h>
void f(const double *x, double *result) 
{

    *result = (4 - pow(*x, 2)) / 2;
}
int main(void)
{
    double x,result;
    _Bool b = 1;
    while (b==1)
    {
     printf("Меню:\n");
    printf("1. Начать\n");
    printf("2. Завершить\n");
    printf("Выберите номер задания: ");
    switch (_getch())
    {
    case '1':
    {
        printf("\nx = ");
        scanf("%lf", &x);
        f(&x,&result);
        printf("f = %.4lf\n\n", result);
        break;
    }
    case '2':
    {
        b = 0;
        break;
    }
    default:
    {
        printf("\nНеправильное значение.\n");;
        break;
    }
    }
    } 
    return 0;
}