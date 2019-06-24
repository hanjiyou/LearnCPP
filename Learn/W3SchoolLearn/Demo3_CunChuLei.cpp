#include<iostream>
using namespace std;
/*
1.存储类:
(1)auto存储类：auto 只能用在函数内，即 auto 只能修饰局部变量: auto int month
(2)register 存储类用于定义存储在寄存器中而不是RAM中的局部变量。这意味着变量的最大尺寸等于寄存器的大小
且不能对它应用一元的 '&' 运算符（因为它没有内存位置）
(3)static存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁
*/
void func(void);//函数声明
static int count=10;//全局变量
int main(){

	while(count-->0){
		cout<<"count="<<count<<endl;
		func();
	}

	cout<<"-------------逻辑运算符 && || !"<<endl;
	int a = 5;
   int b = 20;
   int c ;

   if ( a && b )
   {
      cout << "Line 1 - 条件为真"<< endl ;
    }
    if ( a || b )
    {
        cout << "Line 2 - 条件为真"<< endl ;
    }    /* 改变 a 和 b 的值 */
    a = 0;
    b = 1;
    if ( a && b )
    {
        cout << "Line 3 - 条件为真"<< endl ;
    }else{
        cout << "Line 4 - 条件不为真"<< endl ;
    }
    if ( !(a && b) ){
    cout << "Line 5 - 条件为真"<< endl ;
    }
    cout<<"---------------位运算符"<<endl;
    int a1=1,b1=0;
    cout<<"异或"<<(a1^b1);
	return 0;
}
//函数定义
void func(void)
{
	static int i=5;
	i++;
	cout<<"变量i="<<i<<" count="<<count<<endl;
}