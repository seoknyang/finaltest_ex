#include<stdio.h>

//�Ǻ���ġ ���� �ݺ��� ���� 
int main()
{
	int num = fibonacci(7);
	printf("%d", num);
}

int fibonacci(int nth)
{
	int n1 = 0;
	int n2 = 1;
	int n3;
	int i;
	
	if(nth == 0 || nth == 1)
		return nth;
	for(i=1; i<=nth-1; i++)
	{
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	
	return n3;
}
