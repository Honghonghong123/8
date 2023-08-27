#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("%d\n", n);
//	printf("%lf\n",pFloat);
//	*pFloat = 9.0;
//	printf("%d\n", n);
//	printf("%lf\n",pFloat);
//	return 0;
//}int与float的存储方式不同
//float 0   00000000      00000000000000000000000
//      S   E(8或11位)    M(23或54位)   



//int main()
//{
	//char arr[] = "abcdef";
	//char* p = arr;
	//printf("%d\n", arr);
	//printf("%d\n", p);


	//const char* p ="abcdef";//"abcdef"是常变量，无法更改,加上const会更好。
	////	*p = "abc";
	//printf("%s\n", p);

//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//"abcdef"是常变量，所以P1和P2取的地址一样。
//	char* p2 = "abcdef";
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//利用数组指针打印二维数组。
//void print1(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}

//表示数组元素
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",*( arr + i));
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[5];//arr是数组，元素5个，类型int
//	int* parr1[5];//parr1是数组，元素5个，类型指针，是指针数组
//	int(*parr2)[5];//parr2是指针，指向一个数组int [5]，是数组指针
//	int(*parr3[10])[5];//parr3是数组，元素10个，类型是数组指针。这个数组指针的数组为int [5]
//	return 0;
//}



//void test(int arr[])
//{}
//void test(int arr[5])
//{}
//void test(int* arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int**arr)
//{}
//int main()
//{
//	int arr1[10];
//	int* arr2[20];
//	test(arr1);
//	test2(arr2);
//	return 0;
//}//都可以传参，不过int arr[10]  int *arr[20]的个数不重要，相当于没有，系统不看
//
//
//
////一级指针可以接收什么
//int a = 10;
//int* pa = &a;
//int arr[];
//int* p = &a, pa, arr;
////二级指针可以接收什么，与一级指针一个道理
//int a = 10;
//int* pa = &a;
//int** ppa = &pa;
//int* arr[];
//int** p = &pa, ppa, arr;
//
//
////函数指针写法与数组指针写法类似，但&Add和Add都是函数地址，而&arr和arr不同
//void Add(int x,int y)
//{}
//void (*p)(int, int) = Add;







