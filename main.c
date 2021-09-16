#include<stdio.h>
#include<stdlib.h>
#define CYCLE 10

#ifdef _WIN32
#define sleep(x) Sleep(x*1000)
#else
#include<unistd.h>
#endif // _WIN32

int main()
{
    int hour, minute, second;

    printf("Enter Hour Minute Second: ");
    scanf("%d%d%d", &hour, &minute, &second);
    system("cls");

    int h = 0, m = 0, s = 0;
    while(1)
    {
        printf("\n\n####### STOP WATCH #######\n\n\n");
        printf("        %.2d:%.2d:%.2d\n", h, m, s);
        printf("\n\n##########################\n\n\n");
        if(h == hour && m == minute && s == second)
        {
            break;
        }
        else
        {
            system("cls");
        }
        s++;
        sleep(1);
        if(s == CYCLE)
        {
            m++;
            s = 0;
        }
        if(m == CYCLE)
        {
            h++;
            m = 0;
        }
    }


    return 0;
}
