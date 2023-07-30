#include <stdio.h>
#include <stdlib.h>

int check(char s)
{
    if(s=='M')
        return 1000;
    if(s=='D')
        return 500;
    if(s=='C')
        return 100;
    if(s=='L')
        return 50;
    if(s=='X')
        return 10;
    if(s=='V')
        return 5;
    if(s=='I')
        return 1;
    else
        return 0;
}

int romanToInt(char *s)
{
    int i=0,sum=0;
    while((*(s+i))!='\0')
    {
        if(check(*(s+i))>=check(*(s+i+1)))
        {
            sum=sum+check(*(s+i));
            i=i+1;
        }
        else
        {
            sum=sum+check(*(s+i+1))-check(*(s+i));
            i=i+2;
        }
    }
    return sum;
}

int main()
{
    char s[]="MCMXCIV";
    printf("%d",romanToInt(s));
    return 0;
}
