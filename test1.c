

//#include<stdio.h>
////1.���泣��
// 2.const���εĳ�����const int num=4
//4.ö�ٳ���
//ö��-һһ�о�
//c�б�����һһ�оٵ�ֵ-ö��
//ö�ٹؼ���-enum
//enum Sex
//{
	//MALE,
	//FEMALE,
	//SECRET //ö�ٳ���
//};

//#define   MAX 10//3.#define����ı�ʶ������
//enum Clolor
//{
//	RED,
//	YELLOW,
//	BLUE

//};
//int main()
//{
	//enum Clolor color = RED;
	//"abcdef";"���ַ�������
	//printf("hello world\n");
	//int a = 0;
	//scanf("%d", &a);
	//printf("a=%d\n", a);
	//int arr[MAX];
	//printf("%d\n",MAX);
	//char�ַ� 
	// 


//	char arr1[]="abc";//���� һ���� ���ַ����ŵ��ַ�������
//	printf("%s\n", arr1);//%s��ӡ�����ַ���      \n����
//	return 0;
//}//newc++file.cpp



//���ڴ������ڲ��Ľоֲ�����  �������ⲿ�Ľ�ȫ�ֱ���  ���ֲ�������ȫ�ֱ�����ͻʱ���ֲ���������





//�ַ���
//�ַ���������־��\0��ת���ַ�  \0�������ַ���������
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c',0};
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ�������   ��Ϊ\0�����ַ����������Բ���
//	printf("%d\n", strlen(arr2));//arr2 ��֪�������ʲô ֱ���ҵ�\0��ֹͣ   ���Բ������ֵ
//	//char arr1 [] = "abc";//"abc"--'a'-ֵ97 'b' 'c' '\0'��ֵ��0   '\0'�ַ����Ľ�����־ 
//	//char arr2[] = { 'a','b','c' ,0};//�������ӽ�����־
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//
//}
// 
// 
// 
//ת���ַ�:ת��ԭ������˼
//   \? �� ����д??+��������  eg.??��-����ĸ��  �ĳ�\��\����  ���ã�����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ�� ��VC6.0ʹ�ã�
//   \' :  ���ڱ�ʾ�ַ�����'  
//   \" :   ���ڱ�ʾһ ���ַ����ڲ���˫����
//   \\ :���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
//   \a :�����ַ�������
//   \b :�˸��
//   \f:��ֽ��
//   \n:����
//   \r:�س�
//   \t:ˮƽ�Ʊ��
//   \v:��ֱ�Ʊ��
//   \ddd��ddd��ʾ1~3���˽��Ƶ����֡��磺\130 \32
//   \xdd:dd��ʾ2��ʮ����������      ��: \x61��ʾa  ע��б�ܼ�б�ܺ��������һ���ַ�




//int main()
//{
	   // printf("%d\n", strlen("c:\test\32\test.c"));//
	   // ע��:�˽�����ֻ��0~7
	   //  \t��һ���ַ� \32Ҳ��ת���ַ�   \32--32�������˽�������
	   //32-->ʮ������26-->��ΪASCII��ֵ������ַ�
	   //printf("%c\n", '\x61');
	   //���ַ����ĳ��ȣ���������ӡ
	   //%c ��ʾ��ӡ�ַ� %d��ӡ����
	    //  \t-ˮƽ�Ʊ��-������м���ˮƽ�Ʊ��һ��ռ�Ĵ�С	tab ��һ��
		//return 0;
//}
   //ע�ͣ������Ѷ��ĵط�
//C���Է���ע�ͣ�����Ƕ��ע��
/*             


����


*/
//c++ע��//





/*int main()//ѡ�����
#include <stdio.h
{
	int input = 0;
	printf("����ô�����?��1/0��>:"); //>:��һ����ʾ��
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");
	return 0;




}*/

//ѭ�����
/*c�е�ѭ��������
1.while���
2.for���
3.do....while���*/
#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	
//	printf("��offer\n");
//int line = 0;
//	printf("�������\n");
//
//
//	while (line < 2000)
//	{
//		printf("��һ�д���\n");
//		line++;
//
//	}
//
//
//	return 0;
//
//}



//������1.�⺯�� 2.�Զ��庯��
//���ã��򻯴���
//Add�Զ��庯��
/*int Add(int x, int y)//int x���ܴ�����num1�� int y���ܴ�����num2 Add�к����� ������Ľк����Ĳ��� int�к�����������
{//�����Žк�����
	int z=x + y;
	return z;//���z Ҫ����z z��һ������ ���Է���һ������ Add����һ��������int
}
int main()
{//�����������ĺ�
	    int num1 = 0;//���ڴ�����4���ֽ�
		int num2 = 0;
		//���뺯��scanf--��������
		scanf("%d%d", &num1, &num2);//����%d������������,&ȡ��ַ
		int sum = 0;//c�����﷨�涨����Ҫ�����ڵ�ǰ��������ǰ��;C++�����������ﶨ��
		sum = Add(num1, num2);//Add����
		//sum = num1 + num2;
		printf("sum=%d\n", sum);//%d��ӡ��� �滻���Ǻ����sum
		return   0;
}*/
//��������         �ֽ�  
/* char				1
short				2
int					4
long				4
long long			8
float				4
double				8 */


//����������������������
//�ֲ��������������Ǳ������ڵľֲ���Χ
/*int main()
{//num�޷�����						{//num�������� ��Ϊ�ڶ������������嶼���ڵ�һ��������
										int num=0
	{											{
	int main=mun;									printf("num=%d\n",num);
	}
	printf("num =%d\n", num);					}		
	return 0��
}*/                                 //}
//ȫ�ֱ���������������������
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
//{    //δ�����ı�ʶ��
//	//extern�����ⲿ����
//	//extern int g_val;
//	//printf("g_val =%d\n", g_val*);
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//	return 0;
//



//�ֲ��������������ڣ�����������ʼ ������
//ȫ�ֱ������������ڣ������������������



//���飺


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
	char name[20];//����








};






int main()
{











}