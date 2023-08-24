#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
//int get_max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}



//void Swap(int* pa, int* pb)
//{
//	int i = 0;
//	i = *pa;
//	*pa = *pb;
//	*pb = i;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n",a,b);
//	Swap(&a,&b);
//	printf("a=%d,b=%d\n",a,b);
//	return 0;
//}



//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}		
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}



//有序数列的二分查找
//int find(int arr[], int k, int right)
//{
//	int left = 0;
//	while(left<=right)
//	{
//		int i = (left + right) / 2;
//		if (arr[i] > k)
//		{
//			right = i-1;
//		}
//		else if (arr[i] < k)
//		{
//			left = i+1;
//		}
//		else
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,15,20,86,100,500};
//	int k = 87;
//	int l = sizeof(arr) / sizeof(arr[0]) - 1;
//	int j = find(arr, k, l);
//	if ( j== -1)
//	{
//		printf("未找到\n");
//	}
//	else
//	{
//		printf("%d",j);
//	}
//	return 0;
//}



//#include "is_leap_year.h"
//int main()
//{
//	int y = is_leap_year(2024);
//	printf("%d", y);
//	return 0;
//}