#include<iostream>
using namespace std;
#include <cmath>
#include <ctime>
#include <cstdlib>
 /*
1.常用的数学运算函数 cos/sin/log/pow/
 */
int main(){

	int a=5;
	switch(a){
		case 1:
			cout<<"is 1"<<endl;
		break;

		default:
			cout<<"is default"<<endl;

		break;
	}
	cout<<"4的开跟"<<sqrt(4)<<endl; 
	cout<<"------------------随机数"<<endl;
	int i,j;
	int min=5,max=10;
	srand((unsigned)time(NULL));//设置种子
	for (i = 0; i < 10; ++i)
	{
		j=rand()%(max-min+1)+min;//生成实际的随机数
		cout<<"随机数:"<<j<<endl;
	}
	cout<<"------------------数组"<<endl;
	double arr[10];//数组声明
	//arr={1,2,3,4,5,6,7}; 初始化器只有声明的时候才能使用
	int arr2[3][4] = {  
 {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
 {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
 {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
};
	return 0;
}