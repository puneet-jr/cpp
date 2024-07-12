#include<stdio.h>
int main()
{
    char str[45];
    for(int i=0;i<45;i++){
        scanf("%s\n",str[i]);
    }
    for(int i=0;i<45;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;

}