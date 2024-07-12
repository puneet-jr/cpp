#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char str[] = "hello punett";
    char stp;
    char arr[strlen(str) + 1];  // +1 for the null terminator
    scanf("%c", &stp);
    int j = 0;  // Index for arr
    for(int i = 0; i < strlen(str); i++)
    {
        if(stp != str[i])  // If the character is not the one to be removed
        {
            arr[j] = str[i];  // Add it to arr
            j++;
        }
    }
    arr[j]='\0';

    printf("%s", arr);

    return 0;
}