#include <stdio.h>
/*
int func(int, int);
int main(void)
{
  int result1,result2;
	int (*ptrFunc)(int,int);
	ptrFunc=func;
	result1 = (*ptrFunc)(10,20);
	result2 = ptrFunc(10,20);
	printf("result1 = %d result2 = %d\n",result1,result2);
	return 0;
}	



int func(int x, int y)
{
return x+y;
}
*/

int function(int);

int main()
{

	int (*ptrfunction)(int);
	int result;

	ptrfunction=function;
	result=(*ptrfunction)(10);
	printf("%d",result);
	return 0;
}
int function(int i)
{
	return (i+10);
}
