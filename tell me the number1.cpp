// 读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
// 友情提示:long的最大数据 为2的64次方
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> 
convert2character(int number){
	string char_set[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int temp = 0;
    vector<string> result;
    
    while(number!=0){
		temp = number % 10;
		number /= 10;
        result.push_back(char_set[temp]);
	}
    return result;
}

int
main(int argc,const char* argv[]){
    char ch = 0;
    unsigned int total = 0;
    
    while(cin.get(ch)){
        if(static_cast<int>(ch)==10) break;
        total += static_cast<int>(ch) - static_cast<int>('0');
    }
	vector<string> result = convert2character(total);
	
    for(int i = result.size()-1; i>=0;i--){
        cout<<result[i];
        if(i!=0) cout<<" ";
    }
	
	if(result.size()==0)
		cout<<"ling";

    return 0;
}
