#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int binaryto(int n)
{
  int num=n;
  int decval=0;
  int base=1;
  int temp= num;
  while(temp)
  {
    int last=temp%10;
    temp=temp/10;
    decval+= last*base;
    base=base*2;
  }

return decval;
}



int main()
{ int a;
scanf("%d",&a);
printf("%d",binaryto(a));
   
    return 0;
}