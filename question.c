#include<stdio.h>

int main ()

{ 
   int num, a,b ,c ,d,e, total;

    printf("Enter your five digit number\n");
    scanf("%d",&num);

    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=(num/10000);

    printf("Your number is : %d%d%d%d%d", e,d,c,b,a);

 
return 0;

}

  