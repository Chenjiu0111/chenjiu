#include<stdio.h>
//��������n����ȡ����С�ڵ���n������������
//ʾ����
//���룺n=100
//�����25
//������ֻ�ܱ�1�ͱ�������������
int main()
{
	//���������¼����
	int number=17;
	int count = 0;
    //ͳ�ƴ�2��ʼ����number-1���������Χ֮�ڣ��ж��ٸ������ܱ�number����
	for (int i = 2;i < number;i++)
	{
		if (number % i == 0)
		{
			//�ҵ���һ�������ܱ�number����
			count++;
		}
	}
		//��count�����ж�
		if (count == 0)
		{
			printf("%d��һ������", number);
		}
		else
		{
			printf("%d����һ������", number);
		}
	

	return 0;
}