#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x /y;
}
//int main()
//{

	//(*(void(*)())0)();
	//void(*signal(int, void(*)(int)))(int);
	//signal��һ��������int, void(*)(int)�������βΣ���void(*)(int)�Ƿ�������
	//typedef unsigned int uint;
	//typedef void(*vin)(int);
	//vin signal(int, vin);

	//int (*p)(int, int) = add;
	//printf("%d\n", p(2, 3));
	//printf("%d\n", (*p)(2, 3));
	//printf("%d\n", (**p)(2, 3));
	//printf("%d\n", (***p)(2, 3));

	//int (*p[4])(int, int) = { Add,Sub,Mul,Div };
	//int i = 0;
	//for (i = 0; i < 4; i++)
	//{
	//	printf("%d\n", p[i](2, 3));
	//}
	//return 0;
//}



//int main()
//{
//	int input = 1;
//	do
//	{
//		printf("******************\n");
//		printf("* 1.Add    2.Sub *\n");
//		printf("* 3.Mul    4.Div *\n");
//		printf("***** 0.exit *****\n");
//		printf("******************\n");
//		printf("��ѡ���㷨\n");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		switch(input)
//		{
//
//		case 1:
//			printf("��������������\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("��������������\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("��������������\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("��������������\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�");
//			break;
//		default:
//			printf("�������");
//			break;
//		}
//	} while (input);
//	return 0;
//}
