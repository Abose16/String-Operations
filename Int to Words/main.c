#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void ch(int temp, int c)
{
    if(temp==1)
    {
        printf("One ");
    }
    else if(temp==2)
    {
        printf("Two ");
    }
    else if(temp==3)
    {
        printf("Three ");
    }
    else if(temp==4)
    {
        printf("Four ");
    }
    else if(temp==5)
    {
        printf("Five ");
    }
    else if(temp==6)
    {
        printf("Six ");
    }
    else if(temp==7)
    {
        printf("Seven ");
    }
    else if(temp==8)
    {
        printf("Eight ");
    }
    else if(temp==9)
    {
        printf("Nine ");
    }
    else if(temp==10)
    {
        printf("Ten ");
    }
    else if(temp==11)
    {
        printf("Eleven ");
    }
    else if(temp==12)
    {
        printf("Twelve ");
    }
    else if(temp==13)
    {
        printf("Thirteen ");
    }
    else if(temp==14)
    {
        printf("Fourteen ");
    }
    else if(temp==15)
    {
        printf("Fifteen ");
    }
    else if(temp==16)
    {
        printf("Sixteen ");
    }
    else if(temp==17)
    {
        printf("Seventeen ");
    }
    else if(temp==18)
    {
        printf("Eighteen ");
    }
    else if(temp==19)
    {
        printf("Nineteen ");
    }
    else if(temp==20)
    {
        printf("Twenty ");
    }
    else if(temp==30)
    {
        printf("Thirty ");
    }
    else if(temp==40)
    {
        printf("Forty ");
    }
    else if(temp==50)
    {
        printf("Fifty ");
    }
    else if(temp==60)
    {
        printf("Sixty ");
    }
    else if(temp==70)
    {
        printf("Seventy ");
    }
    else if(temp==80)
    {
        printf("Eighty ");
    }
    else if(temp==90)
    {
        printf("Ninety ");
    }
    if(c==3||c==6)
    {
        printf("Hundred ");
    }
    else if(c==4||c==5)
    {
        printf("Thousand ");
    }
    else if(c==7)
    {
        printf("Million ");
    }
}

void word(int n)
{
    int temp,c,r;
    while(n)
    {
        c=1;
        temp=n;
        while(temp/10)
        {
            temp=temp/10;
            c++;
        }
        if(c==2)
        {
            if(temp==1)
            {
                r=n%10;
                temp=temp*10+r;
                ch(temp,c);
                n=n-temp;
            }
            else
            {
                ch(temp*10,0);
                n=n-temp*10;
            }
        }
        else if(c==5)
        {
            if(temp==1)
            {
                temp=n;
                while(temp/10)
                {
                    r=temp%10;
                    temp=temp/10;
                }
                temp=temp*10+r;
                ch(temp,c);
                n=n-temp*1000;
            }
            else
            {
                ch(temp*10,0);
                n=n-temp*10000;
            }
        }
        else
        {
            ch(temp,c);
            n=n-(temp*pow(10,c-1));
        }
    }
}

int main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    word(n);
    return 0;
}
