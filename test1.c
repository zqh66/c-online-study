

//#include<stdio.h>
////1.字面常量
// 2.const修饰的常变量const int num=4
//4.枚举常量
//枚举-一一列举
//c中表达可以一一列举的值-枚举
//枚举关键字-enum
//enum Sex
//{
	//MALE,
	//FEMALE,
	//SECRET //枚举常量
//};

//#define   MAX 10//3.#define定义的标识符常量
//enum Clolor
//{
//	RED,
//	YELLOW,
//	BLUE

//};
//int main()
//{
	//enum Clolor color = RED;
	//"abcdef";"空字符串”；
	//printf("hello world\n");
	//int a = 0;
	//scanf("%d", &a);
	//printf("a=%d\n", a);
	//int arr[MAX];
	//printf("%d\n",MAX);
	//char字符 
	// 


//	char arr1[]="abc";//数组 一组数 把字符串放到字符数组里
//	printf("%s\n", arr1);//%s打印数组字符串      \n换行
//	return 0;
//}//newc++file.cpp



//放在大括号内部的叫局部变量  大括号外部的叫全局变量  当局部变量与全局变量冲突时，局部变量优先





//字符串
//字符串结束标志是\0的转义字符  \0不算做字符串的内容
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c',0};
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度   因为\0不算字符串内容所以不算
//	printf("%d\n", strlen(arr2));//arr2 不知道后面放什么 直到找到\0才停止   所以产生随机值
//	//char arr1 [] = "abc";//"abc"--'a'-值97 'b' 'c' '\0'的值是0   '\0'字符串的结束标志 
//	//char arr2[] = { 'a','b','c' ,0};//主动增加结束标志
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//
//}
// 
// 
// 
//转义字符:转变原来的意思
//   \? ： 在书写??+其他符号  eg.??）-三字母词  改成\？\？）  作用：在书写连续多个问号时使用，防止他们被解析成三字母词 （VC6.0使用）
//   \' :  用于表示字符常量'  
//   \" :   用于表示一 个字符串内部的双引号
//   \\ :用于表示一个反斜杠，防止它被解释为一个转义序列符
//   \a :警告字符，蜂鸣
//   \b :退格符
//   \f:进纸符
//   \n:换行
//   \r:回车
//   \t:水平制表符
//   \v:垂直制表符
//   \ddd：ddd表示1~3个八进制的数字。如：\130 \32
//   \xdd:dd表示2个十六进制数字      如: \x61表示a  注：斜杠及斜杠后的数字算一个字符




//int main()
//{
	   // printf("%d\n", strlen("c:\test\32\test.c"));//
	   // 注释:八进制中只有0~7
	   //  \t算一个字符 \32也是转义字符   \32--32是两个八进制数字
	   //32-->十进制是26-->作为ASCII码值代表的字符
	   //printf("%c\n", '\x61');
	   //求字符串的长度，求出来后打印
	   //%c 表示打印字符 %d打印整形
	    //  \t-水平制表符-在输出中加入水平制表符一块空间的大小	tab 跳一段
		//return 0;
//}
   //注释：代码难懂的地方
//C语言风格的注释，不能嵌套注释
/*             


内容


*/
//c++注释//





/*int main()//选择语句
#include <stdio.h
{
	int input = 0;
	printf("你会敲代码吗?（1/0）>:"); //>:是一个提示符
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;




}*/

//循环语句
/*c中的循环有三种
1.while语句
2.for语句
3.do....while语句*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	
//	printf("好offer\n");
//int line = 0;
//	printf("加入比特\n");
//
//
//	while (line < 2000)
//	{
//		printf("敲一行代码\n");
//		line++;
//
//	}
//
//
//	return 0;
//
//}



//函数：1.库函数 2.自定义函数
//作用：简化代码
//Add自定义函数
/*int Add(int x, int y)//int x接受传来的num1， int y接受传来的num2 Add叫函数名 括号里的叫函数的参数 int叫函数返回类型
{//大括号叫函数体
	int z=x + y;
	return z;//算出z 要返回z z是一个整形 所以返回一个整形 Add接受一个整型用int
}
int main()
{//计算两个数的和
	    int num1 = 0;//向内存申请4个字节
		int num2 = 0;
		//输入函数scanf--输入数据
		scanf("%d%d", &num1, &num2);//两个%d输入两个整形,&取地址
		int sum = 0;//c语言语法规定变量要定义在当前代码块的最前面;C++中哪里用哪里定义
		sum = Add(num1, num2);//Add函数
		//sum = num1 + num2;
		printf("sum=%d\n", sum);//%d打印结果 替换的是后面的sum
		return   0;
}*/
//数据类型         字节  
/* char				1
short				2
int					4
long				4
long long			8
float				4
double				8 */


//变量的作用域与生命周期
//局部变量的作用域是变量所在的局部范围
/*int main()
{//num无法运行						{//num可以运行 因为第二个大括号整体都属于第一个大括号
										int num=0
	{											{
	int main=mun;									printf("num=%d\n",num);
	}
	printf("num =%d\n", num);					}		
	return 0；
}*/                                 //}
//全局变量的作用域是整个工程
// eg1.
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//eg2.

//
//int main()
//{    //未声明的标识符
//	//extern声明外部符号
//	//extern int g_val;
//	//printf("g_val =%d\n", g_val*);
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//	return 0;
//



//局部变量的生命周期：进入作用域开始 出结束
//全局变量的生命周期：整个程序的生命周期



//数组：


//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%p\n", &a);
//	printf("%p\n", p);
//
//
//
//
//}


struct Book
{
	char name[20];//名字








};






int main()
{











}