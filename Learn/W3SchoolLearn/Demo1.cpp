#include <iostream>

using namespace std;
   typedef char mychar;

enum color{
	red,
	green=5,
	blue
}colorName;
// main() 是程序开始执行的地方

int main()
{
   cout << "Hello   World"; // 输出 Hello World    return 0; 
   char c='c';//-128-255  255=2^8-1  即-128-127 / 0-255
   unsigned char c1=97;//-128-255  255=2^8-1 
   cout<<"C="<<int (c)<<endl;//char 1:如果用字符直接赋值 也可通过强转获取整数 否则默认输出字符

   cout<<"C1="<<c1<<endl;//char 2:输出字符变量 如果值为整数 则输出对应的字符
   int i1=5;
   cout<<"i1="<<i1<<endl;
   cout<<"--------------------sizeof 获取指定类型/变量的字节数"<<endl;
   cout<<"sizeof( bool) "<<sizeof( bool)<<endl;
   cout<<"sizeof( wchar_t) "<<sizeof( wchar_t)<<endl;
   cout<<"sizeof( int) "<<sizeof( int)<<endl;
   cout<<"sizeof(long int) "<<sizeof(long int)<<endl;
   cout<<"sizeof( int) "<<sizeof( int)<<endl;
   cout<<"sizeof( float) "<<sizeof( float)<<endl;
   cout<<"sizeof( double) "<<sizeof( double)<<endl;
   cout<<"sizeof( i1) "<<sizeof( i1)<<endl;
   cout<<"------typedef定义别名"<<endl;
   mychar c3='a';
   cout<<c3;
   colorName=blue;
   cout<<"blue="<<blue;
} 
