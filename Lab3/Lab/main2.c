#include <stdio.h>
#include "Task21.h"
#include "Task22.h"
#include "Task23.h"
#include "Task24.h"
#include "Task25.h"
int main(void)
{
    int n;
    int k;
    int ir;
    double eps;
    double r;

    while (1)
    {
        system("cls");
        printf("1 - Task21\n2 - Task22\n3 - Task23\n4 - Task24\n5 - Task25\n6 - Exit\r\n");
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
