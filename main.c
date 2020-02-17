#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define TRUE 1

int main(void)
{
    int hour = 0, min = 0, sec = 0;
    while(TRUE){
        printf("\r \t%2d : %2d : %2d\n", hour, min, sec);
        sec++;
        sleep(1);
        if(sec == 59){
            min++;
            sec = 0;
        }
        if(min == 59){
            hour++;
            min = 0;
            sec = 0;
        }
        if(hour == 24){
            hour = 0;
            min = 0;
            sec = 0;
        }
    }

    return 0;
}
