#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//tool:http://www.cplusplus.com/reference/
//程序员的知乎：https://stackoverflow.com/
//A.主要内容：函数的分类、参数、调用、嵌套调用和链式访问、声明和定义、递归
//**函数的分类
//一.库函数
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
//二.自定义函数
//1.写一个函数可以找出两个整数中的最大值
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
//2.写一个函数可以交换两个整形变量的内容
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
//	printf("改变前:a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("改变后：a=%d b=%d\n", a, b);
//	return 0;
//}
// 
// 
//**函数的参数
//一.实际参数(实参)：
//真实传给函数的参数，叫实参。实参可以是：常量、变量、表达式、函数等。无论实参是何种类型的量，
//在进行函数调用时，它们都必须有确定的值，以便把这些值传送给形参。
//
// 
// 二.形式参数(形参)：
//形式参数是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化(分配内存单元)，
//所以叫形式参数。形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。
// 
// 
//**函数的调用
//一.传值调用
//函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参。
//
// 
//二.传址调用
//传址调用是把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//这种传参方式可以让函数和函数外边的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量。
//
// 
//**函数的嵌套调用和链式访问
//一.嵌套调用
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
//二.链式访问
//把一个函数的返回值作为另一个函数的参数
//1.
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n",len);
//	
//	printf("%d\n", strlen("abc"));/*链式访问*/
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
//	printf("%s\n", printf("%s", arr1));/*链式访问*/
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
//**函数的声明和定义
//一.函数声明：
//1.告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关紧要。
//2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3.函数的声明一般要放在头文件中的。
//
// 
//二.函数定义：
//函数的定义是指函数的具体实现，交待函数的功能实现。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int Add(int x, int y);/*声明*/
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//int Add(int x, int y)/*定义*/
//{
//	return x + y;
//}
//（定义在前面则不用声明，若在后面则要声明）
// 
// 
//**函数递归
//一.什么是递归？
//程序调用自身的编程技巧称为递归(recursion)。递归做为一种算法在程序设计语言中广泛应用。
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，
//它通常把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来求解，
//递归策略只需少量的程序就可描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量。
//递归的主要思考方式在于：把大事化小
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
// 
// 
//二.递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。
//1.接受一个整型值(无符号)，按照顺序打印它的每一位。例如：输入：1234，输出1234.
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
//	print(num);/*print函数可以打印参数部分数字的每一位*/
//	return 0;
//}
// 
// 
//(***是必要条件，但不是充要条件，所以即使同时满足也不一定对***）
//2.error（栈溢出）
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
//写递归代码的时
//1.不能死递归 都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深
//
//
//三.递归与迭代
//1.求n的阶乘。（不考虑溢出）
//a.迭代（循环是迭代的一种方式）
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
//b.递归
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
//2.求第n个斐波那契数。
//a.递归（低效率）/*数据计算太多，计算太慢*/ 
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
//b.迭代（高效率）
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
//1.许多问题是以递归的形式进行解释的，这只是因为它比非递归的形式更为清晰。
//2.但是这些问题的迭代实现往往比递归实现效率更高，虽然代码的可读性稍微差些。
//3.当一个问题相当复杂，难以用迭代实现时，此时递归实现的简洁性便可以补偿它所带来的运行时开销。
//
// 
//经典题目：汉诺塔问题、青蛙跳台问题
// 
// 
//B.练习
//1.实现一个函数。判断一个数是不是素数。利用上面实现的函数打日100到200之间的素数。
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
//2.写一个函数判断一年是不是闰年。
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
//b.优化
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
//3.写一个函数，实现一个整形有序数组的二分查找。
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
//		printf("找不到了");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n",ret);
//	}
//	return 0;
//}
// 
// 
//4.写一个函数，每调用一次这个函数，就会将num的值增加1。
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
//5.编写函数不允许创建临时变量，求字符串的长度。
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
//6.实现一个函数，打印兔法口诀表;口诀表的行数和历数自己指定如:
//输入9，输出9*9口诀表，输入12,输出12*12的乘法口诀表。
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
//7.编写一个函数reverse_string(char * string)(用非递归和递归两种方式实现)
//实现:将参数字符串中的字符反向排列，不是逆序打印0.
//要求:不能使用C函数库中的字符串操作函数。
//比如:char arr[] = {"abcdef"};    逆序之后数组的内容变成:fedcba
//a.非递归
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
//b.递归
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
//	char tmp = *str;               /*第一步：把“a”放到一个空的空间里*/
//	int len = my_strlen(str);
//	*str = *(str + len - 1);       /*第二步：把“f”放到“a”原来的位置*/
//	*(str + len - 1) = '\0';       /*第三步：把原来“f”的位置放上“\0”*/
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);   /*第四步：逆序中间部分*/
//	}
//	*(str + len - 1) = tmp;        /*第五步：把现在的“a”放到“f”原来位置*/
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
//8.写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入:1729，输出:19
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
//9.编写一个函数实现n的k次方，使用递归实现。
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

