#include <stdio.h>
#include <assert.h>
//#include<stdlib.h>
//#include<windows.h>
//判断字节序
//int check()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	if (check() == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//求字符串长度
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefggfjgynhg";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}4294967169 
//4294967169


//int main()
//{
//	char a = 129;
//	printf("%u\n", a);
//	return 0;
//}
//用一个⚪可以很好理解


//以下几个死循环。请注意
//int main()
//{
//	unsigned int i = 9;//i大于等于0 0--(2^32-1)
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//%u无符号
//		Sleep(1000);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[1000] = { 0 };-128--127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//int main()
//{
//	unsigned char i = 0;//0--255
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hellow world\n");
////		Sleep(1000);
//	}
//	return 0;
//}