#include<stdio.h>

//피보나치 수열 재귀함수 예제 
int main()
{
	int num = fibonacciRec(7);
	printf("%d", num);
}

int fibonacciRec(int nth)
{
	if(nth == 0 || nth == 1)
		return nth;
	else
		return fibonacciRec(nth - 1) + fibonacciRec(nth - 2);	
} 
