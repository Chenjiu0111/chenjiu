#include<stdio.h>
int main()
{
	/*
	1的1次方+2的2次方+3的三次方+……+10的10次方，结果是多少？
	提示：结果过大用long long类型
	正确答案：10405071317
	*/
	long long res = 0;
	for (int i = 1;i <= 10;i++)
	{
		long long pow = 1;
		for (int j = 1;j <= i;j++)
		{ 
			pow = pow * i;
		}
		res = res + pow;
	}
	printf("%lld", res);
	return 0;
}