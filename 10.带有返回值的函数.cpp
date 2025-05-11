#include<stdio.h>
//某商场1-12月的营业额如下（单位：万元）
/*
第一季度：10 20 15
第二季度：20 30 17
第三季度：19 17 20
第四季度：23 21 19
要求：定义函数求单个季度的营业额，并判断哪个季度的营业额最高？
*/

int sum(int num1, int num2,int num3)
{
	int sum = num1 + num2 + num3;
	return sum;

}
int main()
{
	int n1 = sum(10,20,15);
	int n2 = sum(20,30,17);
	int n3 = sum(19,17,20);
	int n4 = sum(23,21,19);
	printf("第一季度是%d\n", n1);
	printf("第二季度是%d\n", n2);
	printf("第三季度是%d\n", n3);
	printf("第四季度是%d\n", n4);
	int A = n1 > n2?n1 : n2;
	int	B = A > n3 ? A : n3;
	int	C = B > n4 ? B : n4;
	if (C == n1)
	{
		printf("第一季度营业额高\n");
	}
	else if (C == n2)
	{
		printf("第二季度营业额高\n");
	}
	else if (C == n3)
	{
		printf("第三季度营业额高\n");
	}
	else if (C == n4)
	{
		printf("第四季度营业额高\n");
	}
	else
	{
		printf("一样大\n");
	}
	return 0;
}