#include <stdio.h>

int main(){

int sayi1,sayi2,sayi3;


printf("sayilari girin ");
scanf("%d  %d  %d", &sayi1,&sayi2,&sayi3);



if (sayi1>sayi2 && sayi1>sayi3 )
{
  
  printf("sayi 1 enbuyuk");
  
  
}

else if (sayi2>sayi1 && sayi2>sayi3)
{
    printf("sayi 2 enbuyuk");
    
}

else if (sayi3>sayi1 && sayi3>sayi2)
{
 printf("sayi 3 enbuyuk");

}
else{

    printf("hatali islem");
}


    return 0;
}