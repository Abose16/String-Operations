#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(char *s)
{
    static int sum=0;
    if(s==0)
        printf("%d\n",sum);
    else
    {
        if(strcmp(s,"One")==0)
            sum=sum+1;
        else if(strcmp(s,"Two")==0)
            sum=sum+2;
        else if(strcmp(s,"Three")==0)
            sum=sum+3;
        else if(strcmp(s,"Four")==0)
            sum=sum+4;
        else if(strcmp(s,"Five")==0)
            sum=sum+5;
        else if(strcmp(s,"Six")==0)
            sum=sum+6;
        else if(strcmp(s,"Seven")==0)
            sum=sum+7;
        else if(strcmp(s,"Eight")==0)
            sum=sum+8;
        else if(strcmp(s,"Nine")==0)
            sum=sum+9;
        else if(strcmp(s,"Ten")==0)
            sum=sum+10;
        else if(strcmp(s,"Eleven")==0)
            sum=sum+11;
        else if(strcmp(s,"Twelve")==0)
            sum=sum+12;
        else if(strcmp(s,"Thirteen")==0)
            sum=sum+13;
        else if(strcmp(s,"Fourteen")==0)
            sum=sum+14;
        else if(strcmp(s,"Fifteen")==0)
            sum=sum+15;
        else if(strcmp(s,"Sixteen")==0)
            sum=sum+16;
        else if(strcmp(s,"Seventeen")==0)
            sum=sum+17;
        else if(strcmp(s,"Eighteen")==0)
            sum=sum+18;
        else if(strcmp(s,"Nineteen")==0)
            sum=sum+19;
        else if(strcmp(s,"Twenty")==0)
            sum=sum+20;
        else if(strcmp(s,"Thirty")==0)
            sum=sum+30;
        else if(strcmp(s,"Forty")==0)
            sum=sum+40;
        else if(strcmp(s,"Fifty")==0)
            sum=sum+50;
        else if(strcmp(s,"Sixty")==0)
            sum=sum+60;
        else if(strcmp(s,"Seventy")==0)
            sum=sum+70;
        else if(strcmp(s,"Eighty")==0)
            sum=sum+80;
        else if(strcmp(s,"Ninety")==0)
            sum=sum+90;
        else if(strcmp(s,"Hundred")==0)
            sum=sum*100;
        else if(strcmp(s,"Thousand")==0)
            sum=sum*1000;
        else if(strcmp(s,"Million")==0)
            sum=sum*1000000;
    }
}

int main()
{
    char s[50],ch[10];
    int i=0,j=0;
    printf("\nEnter the value in words: ");
    gets(s);
    while(s[i])
    {
        j=0;
        while(s[i]!=' '&&s[i]!='\0')
        {
            ch[j]=s[i];
            j++;
            i++;
        }
        ch[j]='\0';
        compare(ch);
        i++;
    }
    compare(0);
    return 0;
}
