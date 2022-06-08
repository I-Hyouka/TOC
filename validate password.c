//validate password
#include<stdio.h>
#include<stdlib.h>
void check(char a[]);
int main()
{
    char a[100];
    printf("Enter your password which satisfies \n1.should contain one capital letter\n2. should have one digit from(o-9)\n3.one special character($,*,#,&)\n4. length should be atleast 8\n");
    scanf("%s",a);
    check(a);


}
void check(char a[])
{
    char c;
    int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
    len=strlen(a);
    if(len<8)
    flag1=1;
    else
    {
        for(i=0;i<len;i++)
        if((a[i]>=48&&a[i]<=58))
        {
            flag2=0;

            break;
        }
        else
        flag2=1;

        for(i=0;i<len;i++)
        if((a[i]>=65&&a[i]<=90))
        {
            flag3=0;

            break;
        }
        else
        flag3=1;

        for(i=0;i<len;i++)
        if(a[i]=='$'||a[i]=='#'||a[i]=='*'||a[i]=='&')
        {
            flag4=0;

            break;
        }
        else
        flag4=1;


    }
    if(flag1==1||flag2==1||flag3==1||flag4==1)
    printf("\nPassword incorrect\n");
    else
    printf("password is valid\n");


    return;
}



