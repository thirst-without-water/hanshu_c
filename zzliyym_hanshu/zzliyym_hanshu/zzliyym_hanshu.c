#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//tool:http://www.cplusplus.com/reference/
//����Ա��֪����https://stackoverflow.com/
//A.��Ҫ���ݣ������ķ��ࡢ���������á�Ƕ�׵��ú���ʽ���ʡ������Ͷ��塢�ݹ�
//**�����ķ���
//һ.�⺯��
//1.strcpy
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "i love yym";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
// 
// 
//2.memset
//int main()
//{
//	char arr[] = "love yym";
//	memset(arr, 'x', 4);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
//��.�Զ��庯��
//1.дһ�����������ҳ����������е����ֵ
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
// 
// 
//2.дһ���������Խ����������α���������
//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("�ı�ǰ:a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("�ı��a=%d b=%d\n", a, b);
//	return 0;
//}
// 
// 
//**�����Ĳ���
//һ.ʵ�ʲ���(ʵ��)��
//��ʵ���������Ĳ�������ʵ�Ρ�ʵ�ο����ǣ����������������ʽ�������ȡ�����ʵ���Ǻ������͵�����
//�ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��βΡ�
//
// 
// ��.��ʽ����(�β�)��
//��ʽ������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ����(�����ڴ浥Ԫ)��
//���Խ���ʽ��������ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч��
// 
// 
//**�����ĵ���
//һ.��ֵ����
//�������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Ρ�
//
// 
//��.��ַ����
//��ַ�����ǰѺ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//���ִ��η�ʽ�����ú����ͺ�����ߵı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����
//
// 
//**������Ƕ�׵��ú���ʽ����
//һ.Ƕ�׵���
//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}
// 
// 
//��.��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//1.
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n",len);
//	
//	printf("%d\n", strlen("abc"));/*��ʽ����*/
//	return 0;
//}
// 
// 
//2.
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "yym";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	printf("%s\n", printf("%s", arr1));/*��ʽ����*/
//	return 0;
//}
// 
// 
//3.
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
// 
// 
//**�����������Ͷ���
//һ.����������
//1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ��
//2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3.����������һ��Ҫ����ͷ�ļ��еġ�
//
// 
//��.�������壺
//�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int x, int y);/*����*/
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)/*����*/
//{
//	return x + y;
//}
//��������ǰ���������������ں�����Ҫ������
// 
// 
//**�����ݹ�
//һ.ʲô�ǵݹ飿
//�����������ı�̼��ɳ�Ϊ�ݹ�(recursion)���ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�
//һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
//��ͨ����һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬
//�ݹ����ֻ�������ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬���ؼ����˳���Ĵ�������
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
// 
// 
//��.�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//1.����һ������ֵ(�޷���)������˳���ӡ����ÿһλ�����磺���룺1234�����1234.
//void print(unsigned n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);/*print�������Դ�ӡ�����������ֵ�ÿһλ*/
//	return 0;
//}
// 
// 
//(***�Ǳ�Ҫ�����������ǳ�Ҫ���������Լ�ʹͬʱ����Ҳ��һ����***��
//2.error��ջ�����
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
// 
// 
//д�ݹ�����ʱ
//1.�������ݹ� ��������������ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��
//
//
//��.�ݹ������
//1.��n�Ľ׳ˡ��������������
//a.������ѭ���ǵ�����һ�ַ�ʽ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//}
//b.�ݹ�
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
// 
// 
//2.���n��쳲���������
//a.�ݹ飨��Ч�ʣ�/*���ݼ���̫�࣬����̫��*/ 
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int  main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//b.��������Ч�ʣ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
// 
//  
//1.����������Եݹ����ʽ���н��͵ģ���ֻ����Ϊ���ȷǵݹ����ʽ��Ϊ������
//2.������Щ����ĵ���ʵ�������ȵݹ�ʵ��Ч�ʸ��ߣ���Ȼ����Ŀɶ�����΢��Щ��
//3.��һ�������൱���ӣ������õ���ʵ��ʱ����ʱ�ݹ�ʵ�ֵļ���Ա���Բ�����������������ʱ������
//
// 
//������Ŀ����ŵ�����⡢������̨����
// 
// 
//B.��ϰ
//1.ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�������100��200֮���������
//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2;j<=sqrt(n);j++)
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i +=2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
//2.дһ�������ж�һ���ǲ������ꡣ
//a.
//int is_leap_year(int n)
//{
//		if ((n % 4 == 0)&&(n % 100 != 0) || (n % 400 == 0))
//		{
//			return 1;
//		}
//	return 0;
//}
//int main()
//{
//	int y = 0;
//	for(y=1000;y<=2000;y++)
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//
//	return 0;
//}
//b.�Ż�
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//
//	return 0;
//}
// 
// 
//3.дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//int binary_search(int a[],int k,int s)
//{
//	int left = 0;
//	int right = s - 1;
//		while(left<=right)
//		{
//			int mid = (left + right) / 2;
//			if (a[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (a[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//				return mid;
//		}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ�����");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n",ret);
//	}
//	return 0;
//}
// 
// 
//4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//void Add(int* p)
//{
//	(* p)++;
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		Add(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}
//
//
//5.��д��������������ʱ���������ַ����ĳ��ȡ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "yym";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
// 
// 
//6.ʵ��һ����������ӡ�÷��ھ���;�ھ���������������Լ�ָ����:
//����9�����9*9�ھ�������12,���12*12�ĳ˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//
// 
//7.��дһ������reverse_string(char * string)(�÷ǵݹ�͵ݹ����ַ�ʽʵ��)
//ʵ��:�������ַ����е��ַ��������У����������ӡ0.
//Ҫ��:����ʹ��C�������е��ַ�������������
//����:char arr[] = {"abcdef"};    ����֮����������ݱ��:fedcba
//a.�ǵݹ�
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//b.�ݹ�
// int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;               /*��һ�����ѡ�a���ŵ�һ���յĿռ���*/
//	int len = my_strlen(str);
//	*str = *(str + len - 1);       /*�ڶ������ѡ�f���ŵ���a��ԭ����λ��*/
//	*(str + len - 1) = '\0';       /*����������ԭ����f����λ�÷��ϡ�\0��*/
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);   /*���Ĳ��������м䲿��*/
//	}
//	*(str + len - 1) = tmp;        /*���岽�������ڵġ�a���ŵ���f��ԭ��λ��*/
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
// 
// 
//8.дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//����:1729�����:19
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d ", sum);
//	return 0;
//}
// 
// 
//9.��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

