//
// Created by han on 2019/2/24.
//
#include <iostream>

int
main(){
    int i;
    char str[]="hello world";
    const char * ptr="1234";//定义一个指向字符常量的指针，因为是常量 所以无法修改该指针指向的元素的指 char const*ptr与之类型
    std::cout<<ptr[1]<<std::endl;
    
    char * const ptr2=str;
    char str2[]="world";
    //ptr2=str2;
    //ptr2="222";
    ptr2[1]='2';
    std::cout<<"=====================;";
    std::cout<<ptr2;
    return 0;
}
