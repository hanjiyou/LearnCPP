#include<iostream>
using namespace std;
/*
1.指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址
(1)赋为 NULL 值的指针被称为空指针。程序不允许访问地址位0的内存因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置
(2)指针算术运算： ① 对指针进行四种算术运算：++、--、+、-。操作单位是指针指向数据类型的字节数
(如int 4); ② 数组不能递增，因为数组是一个常量指针
(3)指针和数组：指针访问数组元素的两种方法 int *ptr=arr; 1.ptr[index] 2.*(ptr+index) 3.也可以通过ptr++移动指针ptr[0]
*/
const int MAX=3;
int main(){

	int var1;
	char var2[5];
	cout<<"var1地址"<<&var1<<endl;
	cout<<"var2地址"<<&var2<<endl;
	cout<<"--------------空指针"<<endl;
	int *ptr=NULL;
	cout<<"ptr="<<ptr<<endl;//程序不允许访问地址位0的内存因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置
	if(ptr){
		cout<<"ptr不为空";
	}else{
		cout<<"ptr为空";

	}
	cout<<"--------------指针的算术运算"<<endl;
	int num=5;
	int *ptr2=&num;
	cout<<ptr2<<endl;
	ptr2++;
	cout<<"自增后指针地址位:"<<ptr2<<endl;
	int varArr[MAX]={10,100,1000};
	int *ptr3;
	ptr3=varArr;
	for (int i = 0; i < MAX; ++i)
	{
		//cout<<"for遍历"<<1+i<<"= "<<ptr3[i]<<endl;
		cout<<"for遍历"<<1+i<<"值= "<<ptr3[0]<<"地址="<<ptr3<<endl;
		ptr3++;
	}
	ptr3=varArr;
	while(ptr3<=&varArr[MAX-1]){//指针和地址比较
		cout<<"while遍历"<<"值= "<<ptr3[0]<<"地址="<<ptr3<<endl;
		cout<<"while遍历"<<"值2= "<<*ptr3<<"地址="<<ptr3<<endl;
		ptr3++;
	}
	cout<<"-----------------指针数组"<<endl;
	int var4[MAX]={10,100,1000};
	int *ptr4[MAX];//指针数组
	for (int i = 0; i < MAX; ++i)
	{
		ptr4[i]=&var4[i];
	}
	for (int i = 0; i < MAX; ++i)
	{
		cout<<"ptr4="<<*ptr4[i]<<endl;
	}

	const char * names[MAX]={//必须得是静态的指针
		"hanjiyou",
		"hanpandeng",
		"hanyanlong",
	};
	for (int i = 0; i < MAX; ++i)
	{
		cout<<"遍历names "<<names[i]<<endl;//cout输出的时候 如果地址存的是字符 则自动打印字符知道遇到空字符
	}
	return 0;
}