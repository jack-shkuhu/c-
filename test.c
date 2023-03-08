#include<stdio.h>
//字符类型 char  整int float单精度  double 双精度   short int短整型  long长整型 long long 更长的整型
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//%d,%c,
//%f以浮点数打印（打印小数）
//%p以地址形式打印
//%x打印16进制的数
//%o...
//int main()
//{
	//char ch = 'a';
	//printf("%c\n", ch);//%c--打印字符格式的数据
	//int age = 24;
	//printf("%d\n", age);//%d打印整型十进制的数据
	//long num = 1000;
	//printf("%d\n", num);
	//short int d = 3;
	//printf("%d\n", d);
	//float f = 0.5;
	//printf("%f\n", f);
	//double a = 3.14;
	//printf("%f\n", a);//此处的%f应当用%lf代替，打印出来精度更高，虽然现在把变量3.14的值打印出来是对的，但是后续使用的时候还是应当更规范

	//return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//打印出来的数字表示字节1   1byte=8bit（储存二进制单元的最小单位，存储0或1）  1kb=1024byte 以此类推
//	printf("%d\n", sizeof(int));/*4   这里说明表示的数的最大范围为0--2的32次方减1*/
//	printf("%d\n", sizeof(short));/*2*/
//	printf("%d\n", sizeof(long));/*4    有可能是4，有可能是8，和平台有关系，不过只要满足大于等于int的字节数就行*/
//	printf("%d\n", sizeof(long long));/*8*/
//	printf("%d\n", sizeof(float));/*4*/
//	printf("%d\n", sizeof(double));/*8*/
//	return 0;
//}
//int num=4;//全局变量：定义在{}（代码块）之外的变量
//
//int main()
//{
//	int num=6;//局部变量：在代码块内部定义的变量       局部变量和全局变量的名字建议不要相同，若相同，则以局部变量的优先级为最高
//	printf("%d\n", num);
//	return 0;
//}

//局部变量只能在局部（即{}内使用），全局变量全局都可以使用


//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//c语言语法规定，变量的定义要放在代码块的最前面，否则容易报错
//	//输入数据，使用scanf（输入函数）
//	scanf("%d%d", &num1, &num2);//取地址符号“&”
//		sum = num1 + num2 ;
//		printf("sum=%d\n", sum);
//
//
//	return 0;
//}
//int global = 2022;//全局变量的作用范围在整个工程内
//int main()
//{
//	int num = 10;//局部变量的作用域就是变量所在的代码块内，即{}内
//	extern int g_val;//extern意思为声明外部符号的
//	{
//		printf("num=%d\n", num);
//		printf("global=%d\n", global);
//		printf("g_val=%d\n", g_val);//报错未声明的标识符，所以声明一下就好
//	}
//	
//	return 0;
//}