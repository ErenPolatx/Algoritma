#include <stdio.h>

int main(){

    int terim1=0;
    int terim2=1;
    int terim3;
    int i;
    int n;

    printf("terim sayisini girin ");
    scanf("%d", &n);

    printf("Fibonacci: ");

    for(i=1; i<= n; i++)
    {

    printf("%d", terim1);
    terim3=terim1+terim2;
    terim1=terim2;
    terim2=terim3;

    }


return 0;
}