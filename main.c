#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,x;
    printf("tell us the limit.\n");
    scanf("%d",&x);
    for(a=1;a<x;a=a+1){
        for(int b=1;b<a;b=b+1){
          printf("%d",a);
        }
        printf("%d\n",a);
    }
    return 0;
}
