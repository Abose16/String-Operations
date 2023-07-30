#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char s[10];

char val(int a,int b)
{
    if(a==4&&b==1)
        return 'M';
    else if(a==3&&b==5)
        return 'D';
    else if(a==3&&b==1)
        return 'C';
    else if(a==2&&b==5)
        return 'L';
    else if(a==2&&b==1)
        return 'X';
    else if(a==1&&b==5)
        return 'V';
    else
        return 'I';
}

char * intToRoman(int r)
{
    char ch;
    int temp,start,c,i=0;
    while(r)
    {
        c=0;
        temp=r;
        while(temp)
        {
            start=temp%10;
            temp=temp/10;
            c++;
        }
        if(start==4)
        {
            ch=val(c,1);
            s[i]=ch;
            i++;
            ch=val(c,5);
            s[i]=ch;
            i++;
            r=r-(4*pow(10,c-1));
        }
        else if(start==9)
        {
            ch=val(c,1);
            s[i]=ch;
            i++;
            ch=val(c+1,1);
            s[i]=ch;
            i++;
            r=r-(9*pow(10,c-1));
        }
        else
        {
            if(start<5)
            {
                ch=val(c,1);
                s[i]=ch;
                i++;
                r=r-pow(10,c-1);
            }
            else
            {
                ch=val(c,5);
                s[i]=ch;
                i++;
                r=r-(5*pow(10,c-1));
            }
        }
    }
    s[i]='\0';
    return s;
}

int main()
{
    int r;
    printf("Enter a value: ");
    scanf("%d",&r);
    printf("%s",intToRoman(r));
    return 0;
}
