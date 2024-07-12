#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[]="abcdABCD";
    int length =strlen(s);
    for(int i=0;i<length;i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
        }
        else if(islower(s[i])){
          s[i]=toupper(s[i]);
        }
        
    }
    printf("%s\n",s);
    return 0;
}