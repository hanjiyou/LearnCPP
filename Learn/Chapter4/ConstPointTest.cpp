//
// Created by han on 2019/2/24.
//
#include <iostream>

int
main(){
    using namespace std;
   //int i;
   //char str[]="hello world";
   //const char * ptr="1234";//����һ��ָ���ַ�������ָ�룬��Ϊ�ǳ��� �����޷��޸ĸ�ָ��ָ���Ԫ�ص�ָ char const*ptr��֮����
   //std::cout<<ptr[1]<<std::endl;
   //
   //char * const ptr2=str;
   //char str2[]="world";
   ////ptr2=str2;
   ////ptr2="222";
   //ptr2[1]='2';
   //std::cout<<"=====================;";
   //std::cout<<ptr2;
    int array1[4]={1,2,3};

    int *array2=new int[4]{1,2,4,3};
    std::cout<<sizeof array1<<std::endl;
    std::cout<<sizeof array2<<endl;
    char * p1="1234";
    cout<<p1[2]<<endl;
    char char1[20]="bear";
    char *char2=new char[strlen(char1)+1];
    cout<<"char2�ĳ�����"<<strlen(char1)<<endl;
    strcpy(char2,char1);
    cout<<char2<<endl;
    
    int int1[4]{1,2,3,4};
    cout<< sizeof(int1);
    return 0;
}
