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
//}int��float�Ĵ洢��ʽ��ͬ
//float 0   00000000      00000000000000000000000
//      S   E(8��11λ)    M(23��54λ)   



//int main()
//{
	//char arr[] = "abcdef";
	//char* p = arr;
	//printf("%d\n", arr);
	//printf("%d\n", p);


	//const char* p ="abcdef";//"abcdef"�ǳ��������޷�����,����const����á�
	////	*p = "abc";
	//printf("%s\n", p);

//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";//"abcdef"�ǳ�����������P1��P2ȡ�ĵ�ַһ����
//	char* p2 = "abcdef";
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}


//��������ָ���ӡ��ά���顣
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

//��ʾ����Ԫ��
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
//	int arr[5];//arr�����飬Ԫ��5��������int
//	int* parr1[5];//parr1�����飬Ԫ��5��������ָ�룬��ָ������
//	int(*parr2)[5];//parr2��ָ�룬ָ��һ������int [5]��������ָ��
//	int(*parr3[10])[5];//parr3�����飬Ԫ��10��������������ָ�롣�������ָ�������Ϊint [5]
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
//}//�����Դ��Σ�����int arr[10]  int *arr[20]�ĸ�������Ҫ���൱��û�У�ϵͳ����
//
//
//
////һ��ָ����Խ���ʲô
//int a = 10;
//int* pa = &a;
//int arr[];
//int* p = &a, pa, arr;
////����ָ����Խ���ʲô����һ��ָ��һ������
//int a = 10;
//int* pa = &a;
//int** ppa = &pa;
//int* arr[];
//int** p = &pa, ppa, arr;
//
//
////����ָ��д��������ָ��д�����ƣ���&Add��Add���Ǻ�����ַ����&arr��arr��ͬ
//void Add(int x,int y)
//{}
//void (*p)(int, int) = Add;







