#include <stdio.h>
#include<assert.h>
//结构体:一些值（成员变量）的集合
//声明。以学生为例
//struct Stu  //struct-结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//{
//	char name[20];
//	int age;
//	int id;
//	char sex[5];
//}s1;//创建全局变量
//typedef struct Stu  //给类型重新取名
//{
//	char name[20];
//	int age;
//	int id;
//	char sex[5];
//}Stu;
//struct T
//{
//	char uni[20];
//	Stu s;
//};
//void print(Stu s)
//{
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%d\n", s.id);
//	printf("%s\n", s.sex);
//}
//void print1(Stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%d\n", ps->id);
//	printf("%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "张三",18,20230101,"男" };//创建结构体局部变量
//	struct T room = { "e区",{"张三",18,20230101,"男"} };
//	print(s);
//	print1(&s);
//	return 0;
//}
//print与print1存在差别。传值会压栈，可能导致栈不够。而传址不会



//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int* pp = &n;
//	const int * p = &num;
//	p = pp;
//	printf("%d\n", *p);
//	return 0;
//}//虽然*p成为了常变量，但p可以修改，进而修改*p。


//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(*dest != NULL);
//	assert(*src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
//1.使用assert
//2.尽量使用const来保持不要求变的变量不变
//3.养成良好的编码风格
//4.添加必要的注释
//5.避免陷进。编译器。链接器。运行时