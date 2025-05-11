#include<stdio.h>
int main()
{
	//找出0-1000之内，符合要求的数字：
	/*要求：每一位的数字之和等于15
	举例：78,168,1167*/
	int number = 0;
	
	//外循环：获取范围中的每一个数字
	//内循环：处理这个数字，每一位数字之和等于15
	//获取每一位数字，一次循环只获取一个
	for(int i=0;i<=1000;i++)
	{
		int sum = 0;
		int num1 = i;
		while (num1 != 0)
		{
			//获取
			int temp = num1 % 10;
			//去掉当前获取的数字
			num1 = num1 / 10;
			//获取到的数字累加到一个变量当中
			//temp
			sum = sum + temp;
		}
			if (sum == 15)
			{
				printf("%d\n", i);
			}
				
		
	}
	
	return 0;
}