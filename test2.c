#include<stdio.h>
//�ַ����� char  ��int float������  double ˫����   short int������  long������ long long ����������
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}
//%d,%c,
//%f�Ը�������ӡ����ӡС����
//%p�Ե�ַ��ʽ��ӡ
//%x��ӡ16���Ƶ���
//%o...
//int main()
//{
	//char ch = 'a';
	//printf("%c\n", ch);//%c--��ӡ�ַ���ʽ������
	//int age = 24;
	//printf("%d\n", age);//%d��ӡ����ʮ���Ƶ�����
	//long num = 1000;
	//printf("%d\n", num);
	//short int d = 3;
	//printf("%d\n", d);
	//float f = 0.5;
	//printf("%f\n", f);
	//double a = 3.14;
	//printf("%f\n", a);//�˴���%fӦ����%lf���棬��ӡ�������ȸ��ߣ���Ȼ���ڰѱ���3.14��ֵ��ӡ�����ǶԵģ����Ǻ���ʹ�õ�ʱ����Ӧ�����淶

	//return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));//��ӡ���������ֱ�ʾ�ֽ�1   1byte=8bit����������Ƶ�Ԫ����С��λ���洢0��1��  1kb=1024byte �Դ�����
//	printf("%d\n", sizeof(int));/*4   ����˵����ʾ���������ΧΪ0--2��32�η���1*/
//	printf("%d\n", sizeof(short));/*2*/
//	printf("%d\n", sizeof(long));/*4    �п�����4���п�����8����ƽ̨�й�ϵ������ֻҪ������ڵ���int���ֽ�������*/
//	printf("%d\n", sizeof(long long));/*8*/
//	printf("%d\n", sizeof(float));/*4*/
//	printf("%d\n", sizeof(double));/*8*/
//	return 0;
//}
//int num=4;//ȫ�ֱ�����������{}������飩֮��ı���
//
//int main()
//{
//	int num=6;//�ֲ��������ڴ�����ڲ�����ı���       �ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ������ͬ�����Ծֲ����������ȼ�Ϊ���
//	printf("%d\n", num);
//	return 0;
//}

//�ֲ�����ֻ���ھֲ�����{}��ʹ�ã���ȫ�ֱ���ȫ�ֶ�����ʹ��


//int main()
//{
//	//�����������ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;//c�����﷨�涨�������Ķ���Ҫ���ڴ�������ǰ�棬�������ױ���
//	//�������ݣ�ʹ��scanf�����뺯����
//	scanf("%d%d", &num1, &num2);//ȡ��ַ���š�&��
//		sum = num1 + num2 ;
//		printf("sum=%d\n", sum);
//
//
//	return 0;
//}
//int global = 2022;//ȫ�ֱ��������÷�Χ������������
//int main()
//{
//	int num = 10;//�ֲ���������������Ǳ������ڵĴ�����ڣ���{}��
//	extern int g_val;//extern��˼Ϊ�����ⲿ���ŵ�
//	{
//		printf("num=%d\n", num);
//		printf("global=%d\n", global);
//		printf("g_val=%d\n", g_val);//����δ�����ı�ʶ������������һ�¾ͺ�
//	}
//	
//	return 0;
//}