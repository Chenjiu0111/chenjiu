#include<stdio.h>
//ĳ�̳�1-12�µ�Ӫҵ�����£���λ����Ԫ��
/*
��һ���ȣ�10 20 15
�ڶ����ȣ�20 30 17
�������ȣ�19 17 20
���ļ��ȣ�23 21 19
Ҫ�󣺶��庯���󵥸����ȵ�Ӫҵ����ж��ĸ����ȵ�Ӫҵ����ߣ�
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
	printf("��һ������%d\n", n1);
	printf("�ڶ�������%d\n", n2);
	printf("����������%d\n", n3);
	printf("���ļ�����%d\n", n4);
	int A = n1 > n2?n1 : n2;
	int	B = A > n3 ? A : n3;
	int	C = B > n4 ? B : n4;
	if (C == n1)
	{
		printf("��һ����Ӫҵ���\n");
	}
	else if (C == n2)
	{
		printf("�ڶ�����Ӫҵ���\n");
	}
	else if (C == n3)
	{
		printf("��������Ӫҵ���\n");
	}
	else if (C == n4)
	{
		printf("���ļ���Ӫҵ���\n");
	}
	else
	{
		printf("һ����\n");
	}
	return 0;
}