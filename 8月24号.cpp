#include <stdio.h>
#include<assert.h>
//�ṹ��:һЩֵ����Ա�������ļ���
//��������ѧ��Ϊ��
//struct Stu  //struct-�ṹ��ؼ��� Stu-�ṹ���ǩ struct Stu-�ṹ������
//{
//	char name[20];
//	int age;
//	int id;
//	char sex[5];
//}s1;//����ȫ�ֱ���
//typedef struct Stu  //����������ȡ��
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
//	Stu s = { "����",18,20230101,"��" };//�����ṹ��ֲ�����
//	struct T room = { "e��",{"����",18,20230101,"��"} };
//	print(s);
//	print1(&s);
//	return 0;
//}
//print��print1���ڲ�𡣴�ֵ��ѹջ�����ܵ���ջ����������ַ����



//int main()
//{
//	const int num = 10;
//	int n = 20;
//	int* pp = &n;
//	const int * p = &num;
//	p = pp;
//	printf("%d\n", *p);
//	return 0;
//}//��Ȼ*p��Ϊ�˳���������p�����޸ģ������޸�*p��


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
//1.ʹ��assert
//2.����ʹ��const�����ֲ�Ҫ���ı�������
//3.�������õı�����
//4.��ӱ�Ҫ��ע��
//5.�����ݽ�����������������������ʱ