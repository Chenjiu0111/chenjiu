#include<stdio.h>
int main()
{
	/*
	1��1�η�+2��2�η�+3�����η�+����+10��10�η�������Ƕ��٣�
	��ʾ�����������long long����
	��ȷ�𰸣�10405071317
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