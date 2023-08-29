#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("******************\n");
//	printf("* 1.Add    2.Sub *\n");
//	printf("* 3.Mul    4.Div *\n");
//	printf("***** 0.exit *****\n");
//	printf("******************\n");
//	printf("请选择算法\n");
//	  
//}
//int main()
//{
//	int input = 1;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		int (*p[])(int, int) = {0,Add,Sub,Mul,Div };
//		if (input >= 1 && input <= 4)
//		{
//			int x = 0;
//			int y = 0;
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", p[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出");
//			break;
//		}
//		else
//		{
//			printf("输入错误");
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[10];
//	int(*p)[10] = &arr;
//	int (*pfarr[4])(int, int);//存放函数指针的pfarr数组，元素个数4个，元素类型函数指针
//	int(*(*ppfarr[4]))(int, int)=&pfarr;//ppfarr是指针数组，元素4个，指针是函数指针
//	return 0;
//}




//struct stu
//{
//	char name[20];
//	int age[5];
//};
//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int cmp_float(const void* a, const void* b)
//{
//	return *(float*)a - *(float *)b;
//}
//int cmp_struct_age(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age;
//}
//int cmp_struct_name(const void* a, const void* b)
//{
//	return strcmp(((struct stu*)a)->name , ((struct stu*)b)->name);
//}
//void test()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test1()
//{
//	float arr1[] = { 9.0,8.,7.0,6.0,5.0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%lf ", arr1[i]);
//	}
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",17},{"lisi",18},{"wangwu",19} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_struct_name);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s ", *s[i].name);
//	}
//}
//int main()
//{
//	test();
//	printf("\n");
//	test1();
//	printf("\n");
//	//test3();//name存在问题
//	return 0;
//}


