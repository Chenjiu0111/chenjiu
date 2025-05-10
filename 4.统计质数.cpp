#include<stdio.h>
//给定整数n，获取所有小于等于n的质数的数量
//示例：
//输入：n=100
//输出：25
//质数：只能被1和本身整除的数字
int main()
{
	//定义变量记录整数
	int number=17;
	int count = 0;
    //统计从2开始，到number-1，在这个范围之内，有多少个数字能被number整除
	for (int i = 2;i < number;i++)
	{
		if (number % i == 0)
		{
			//找到了一个数字能被number整除
			count++;
		}
	}
		//对count进行判断
		if (count == 0)
		{
			printf("%d是一个质数", number);
		}
		else
		{
			printf("%d不是一个质数", number);
		}
	

	return 0;
}