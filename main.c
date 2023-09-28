#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*p = &a;//&：取地址操作符
//	printf("%d", *p);//*：解引用操作符
//	return 0;
//}
////输出：10
//int main()
//{
//	char* pc = 1;
//	int* pi = 4;
//	float* pf = NULL;
//	double* pd = NULL;
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);//
//	printf("%p\n", pc);//同上
//	printf("%p\n", pc+1);//上个地址+1
//	printf("%p\n", pi);//同前两个
//	printf("%p\n", pi+1);//上个地址+4
//	return 0;
//}//输出：
////000000E2C4BAFB94
////000000E2C4BAFB94
////000000E2C4BAFB95
////000000E2C4BAFB94
////000000E2C4BAFB98

////查看内存窗口
//int main()
//{
//	int n = 0x11223344;//44 33 22 11
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0;//00 33 22 11
//	*pi = 0;//00 00 00 00
//	return 0;
//}

//int main()
//{
//	int* p;//指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i <= 10; i++)//当指针指向的范围超出数组范围，即i=10时，p就是野指针
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
////输出：0 1 2 3 4 5 6 7 8 9 -858993460

//int test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int*p=test();
//	printf("%d", *p);
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	p = &a;
//	printf("%d ", *p);
//	if (p!=NULL)
//	{
//		*p = 20;
//	}
//	printf("%d ", *p);
//	return 0;
//}
////输出：10 20

#include<assert.h>
void test(int* p1, int* p2)
{
	assert(p1 && p2);
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", *(p1 + i));
		printf("%d ", *(p2 + i));
	}
}
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int* p1 = arr1;
	int* p2 = arr2;
	test(p1, p2);
	return 0;
}
//输出：1 2 3 4 5 6 7 8 9 10