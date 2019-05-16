#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

string
number2string(unsigned int number,char spliter = ','){
    string result;
    unsigned int single_number_counter = 0;
    
    if(number == 0){
        result.push_back('0');
        return result;
    }
    
    while(number!=0){
        if(single_number_counter == 3){
            result.push_back(spliter);
            single_number_counter = 0;            
        }
        // cout<<result<<endl;        
        result.push_back(number%10+'0');
        number/=10;
        single_number_counter++;
    }
    reverse(result.begin(),result.end());
    return result;
}

int
main(int argc,const char* argv[]){
    int number_a = 0, number_b = 0;
    cin>>number_a>>number_b;

    int result = 0;
    result = number_a + number_b;

    int abs_result = abs(result);
    string str_result = number2string(abs_result);
    if(result<0){
        cout<<'-'<<str_result<<endl;
    }else{
        cout<<str_result<<endl;
    }
    
    return 0;
}