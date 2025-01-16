#include<iostream>
using namespace std;
int main(){
    int a,b;//定义两个整形变量a,b
   while( cin>>a>>b) {//cin表示输入，输入a,b
       int result = a + b;
      cout << result << std::endl;//cout表示输出，endl表示回车
   }
    return 0;
}