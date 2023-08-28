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
	//signal是一个函数，int, void(*)(int)是两个形参，而void(*)(int)是返回类型
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
//		printf("请选择算法\n");
//		scanf("%d", &input);
//		int x = 0;
//		int y = 0;
//		switch(input)
//		{
//
//		case 1:
//			printf("请输入两个数字\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数字\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数字\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数字\n");
//			scanf("%d,%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (input);
//	return 0;
//}
