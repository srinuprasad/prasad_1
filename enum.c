#include <stdio.h>

enum status
{
  single,married,divorced

};

enum status persion1,persion2;

int main()
{
	persion1=single;
	persion2=married;
	printf("%d",persion2);
	return 0;
}
