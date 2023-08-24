#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
//void game()
//{
//	int ret = 0;
//	
//	ret = rand() % 100 + 1;
//	printf("它在1到100间\n");
//	while (1)
//	{
//		int guess = 0;
//		scanf("%d", &guess);
//		if (ret > guess)
//			printf("猜小了\n");
//		else if (ret < guess)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		
//		printf("*****欢迎来玩猜数字游戏\n");
//		printf("*****1.Play      2.EXIT\n");
//		printf("***** 输入1       输入0\n");	
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("欢迎下次再来！\n");
//			break;
//		default:
//			printf("输入错误，请重新输入>:\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
