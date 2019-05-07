// 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
// 友情提示:long的最大数据 为2的64次方
#include <iostream>

using namespace std;

bool convert2character(int number,char* result){
	char char_set[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	while(number/10!=0){
		
	}
}
int main(int argc,const char* argv[]){
    char ch = 0;
    unsigned int total = 0;
    
    while(cin.get(ch)){
        if(static_cast<int>(ch)==10) break;
        total += static_cast<int>(ch) - static_cast<int>('0');
    }
	cout<<total;
    
    return 0;
}
