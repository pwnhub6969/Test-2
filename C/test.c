#include<stdio.h>

int func(int arg)
{
	int x=arg;
	int b=10-arg;
	return b;
}

int main()
{
	int x=0;
	int A[10];
	for ( int i=1 ; i<=10 ; i++ )
	{
		if ( i==5 )
		{
			break;
		}
		A[i]=i;
	}
	func(x);
}
