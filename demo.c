#include <stdio.h>
//(三元运算符) ？:
int main(void)
{
	int num;
	scanf_s("%d", &num);
	(num % 2 == 0) ? printf("偶数") : printf("奇数");
	//可简洁的代替ifelse
	return 0;

}