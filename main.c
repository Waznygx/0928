#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*p = &a;//&��ȡ��ַ������
//	printf("%d", *p);//*�������ò�����
//	return 0;
//}
////�����10
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
//	printf("%p\n", pc);//ͬ��
//	printf("%p\n", pc+1);//�ϸ���ַ+1
//	printf("%p\n", pi);//ͬǰ����
//	printf("%p\n", pi+1);//�ϸ���ַ+4
//	return 0;
//}//�����
////000000E2C4BAFB94
////000000E2C4BAFB94
////000000E2C4BAFB95
////000000E2C4BAFB94
////000000E2C4BAFB98

////�鿴�ڴ洰��
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
//	int* p;//ָ��δ��ʼ����Ĭ��Ϊ���ֵ
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
//	for ( i = 0; i <= 10; i++)//��ָ��ָ��ķ�Χ�������鷶Χ����i=10ʱ��p����Ұָ��
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
////�����0 1 2 3 4 5 6 7 8 9 -858993460

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
////�����10 20

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
//�����1 2 3 4 5 6 7 8 9 10