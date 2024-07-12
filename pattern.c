#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
}address;

void printad(struct address add);

int main()
{
   address add[5];
   printf("for person one\n");
   scanf("%d\n",&add[0].houseno);
   scanf("%d\n",&add[0].block);
   fgets(add[0].city,100,stdin);
   fgets(add[0].state,100,stdin);
   printf("for second person\n");
   scanf("%d\n",&add[1].houseno);
   scanf("%d\n",&add[1].block);
   fgets(add[1].city,100,stdin);
   fgets(add[1].state,100,stdin);
   printad(add[0]);
   printad(add[1]);
   return 0;
}
void printad(struct address add){
    printf("address is: %d, %d,%s,%s",add.houseno,add.block,add.city,add.state);
}