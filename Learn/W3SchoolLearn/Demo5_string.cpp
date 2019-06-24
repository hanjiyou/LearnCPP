#include<iostream>
using namespace std;
/*
1.字符串两种表示形式
(1)c风格字符串：使用空字符终止的一维字符数组（数组+空字符(不用手动添加)）
(2)c++引入的string类类型
*/
int main(){

	char arr[6]={'h','e','l','l','o'};//您不需要把 null 字符放在字符串常量的末尾。C++ 编译器会在初始化数组时，自动把 '' 放在字符串的末尾，但需要预留一位用于存放空字符，否则会乱码
	cout<<arr<<" length="<<strlen(arr)<<endl;
	char arr2[5];
	strcpy(arr2,arr);
	cout<<"strcpy="<<arr2<<"结束"<<endl;
	strcat(arr2,arr);
	cout<<"strcat="<<arr2<<"结束"<<endl;
	cout<<"string类型字符串"<<endl;
	string str1="hello";
	string str2="world";
	string str3=str1+str2;
	cout<<"str3="<<str3<<" size="<<str3.size()<<endl;
	return 0;
}