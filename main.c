#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=1;
    while(a<=7){
        int b=1;
        while(b<a){
            printf("%d",a);
            b++;
        }
        printf("%d\n",a);
        a++;
    }

    return 0;
}
