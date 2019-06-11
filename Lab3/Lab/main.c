#include <stdio.h>
#include "task11.h"
#include "task12.h"
#include "task13.h"
#include "task14.h"
#include "task15.h"
int main(void)
{
    int n;
    int k;
    int ir;
    double eps;
    double r;

    for (;;)
    {
        system("cls");
        printf("1 - Task11\n2 - Task12\n3 - Task13\n4 - Task14\n5 - Task15\n6 - Task16\n7 -Exit\r\n");
        char answer = _getch();
        system("cls");
        switch (answer)
        {
        case '1':
            printf("\nEnter n:\n");
            scanf("%i", &n);
            printf("\n");
            r = summ(n);
            printf("%lf\n", r);
            break;
        case '2':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            r = summ2(eps);
            printf("%lf\n", r);
            break;
        case '3':
            printf("\nEnter n:\n");
            scanf("%i", &n);
            printf("\nEnter k:\n");
            scanf("%i", &k);
            printf("\n");
            print(n, k);
            break;
        case '4':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            ir = findFirstElement(eps);
            printf("%i\n", ir);
            break;
        case '5':
            printf("\nEnter eps:\n");
            scanf("%lf", &eps);
            printf("\n");
            ir = findFirstNegativeElement(eps);
            printf("%i\n", ir);
            break;
        case '6':
            return 0;
            break;
        default:
            printf("Invalid input\n");
            break;
        }

        system("pause");

    }
    return 0;
}
