#include<stdio.h>
#include<string.h>

void in_xau( char * s , int n )
{
    for ( int i=0 ; i<n ; i++ )
    {
        printf("%c",s[i]);
    }
}

int main()
{
    char s[100]="";
    scanf("%s",&s);
    in_xau(s,strlen(s));
}