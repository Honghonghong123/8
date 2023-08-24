#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
//	printf("请输入两个数字，可求其最大公约数：");
//	int m = 24;
//	int n = 16;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("二者最大公约数:%d\n",n);
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ",year);
//			num++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ",year);
//			num++;
//		}
//		
//	}
//	printf("\nnumber=%d", num);
//	return 0;
//}
//另一写法
//int main()
//{
//	int year = 0;
//	int num = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			num++;
//		}
//	}
//	printf("\nnum=%d", num);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int num = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		for (b = 2; b <= sqrt(a); b++)
//		{
//			if (a%b == 0)
//			{
//				break;
//			}
//		}
//		if (b > sqrt(a))
//		{
//			printf("%d ", a);
//			num++;
//		}
//	
//	}
//	printf("\n素数number为:%d", num);
//	return 0;
//}
//总结:用根号缩小范围；排除偶数缩小范围
//？？素数求解的n种方法



//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = arr[0];
//	int i = 1;
//	int num = sizeof(arr)/sizeof(arr[0]);
//	for (i=1;i <= num; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//-2
//		}
//		printf("\n");
//	}
//	return 0;
//}
