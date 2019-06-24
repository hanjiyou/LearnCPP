#include<iostream>
using namespace std;
/*
1.变量其实只不过是程序可操作的存储区的名称
2.基本变量类型：bool char int float double wchar_t void
3.extern 使用 extern 关键字在任何地方声明一个变量 但是不能初始化
4. 左值:指向内存位置的表达式 可以出现在赋值号的左边或右边。 右值：不能出现在赋值号左边
5.局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为默认值0/NULL/'\0'
6.常量:
(1)整形常量①十进制 无前缀 ②八进制 0 ③十六进制 0x  ；浮点数：阶码尾数表示法 ； 
(2)字符常量：常量以 L（仅当大写时）开头，则表示它是一个宽字符常量（例如 L'x'）
(3)字符串常量/字面值括在双引号""中。
(4)定义常量的关键字：define、const
7.(1)修饰符类型signed/unsigned可用于整型或字符型 long 用于双精度和整型 short 用于整型 如果是int可省略
(2)类型限定符 const/volatile/restrict 由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式
*/
extern int a;//声明变量a 不可以初始化
int globalI1;//全局变量 
#define AGE 24//定义常量
int main(){
	
	cout<<"hello demo2_DataType"<<endl;
	int a;//通过extern声明的变量 仍然需要定义
	a=5;//初始化
	cout<<"extern a="<<a<<endl;
	cout<<"------------左值和右值"<<endl;
	int a1=5;
	a=a1;
	//5=a;
	cout<<"------------变量作用域"<<endl;
	cout<<globalI1<<endl;

	int globalI1;//局部变量会覆盖全局变量
	cout<<globalI1<<endl;
	cout<<"-----------常量"<<endl;
	int iconstx=0xf;
	cout<<"16进制="<<iconstx<<endl;
	wchar_t cConst='x';
	cout<<sizeof(cConst)<<endl;
	cout<<"AGE="<<AGE<<endl;
	const int AGE2=22;
	cout<<"AGE2="<<AGE2<<endl;
	cout<<"-----------修饰符类型"<<endl;
	short  i;
	i=32767;
	unsigned i2=65525;//
	cout<<"sizeof(short int)"<<sizeof(short int)<<"i="<<i<<" i2="<<i2<<endl;
	return 0;
}