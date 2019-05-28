#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int
main(int argc,const char* argv[]){

    vector<int> numbers;
    vector<int> sequences;
    int number_count = 0, single_number = 0;

    cin>>number_count;
    for(int index = 0; index < number_count; index++){
        cin>>single_number;
        numbers.push_back(single_number);
    }
    

    for(vector<int>::iterator begin = numbers.begin();
        begin != numbers.end(); begin++){
        int n = *begin;
        while(n != 1){
            if(n%2 != 0){
                n = (3*n+1)/2;
                if(find(sequences.begin(),sequences.end(),n) == sequences.end()) sequences.push_back(n);  
                continue;              
            }else{
                n /= 2;
                if(find(sequences.begin(),sequences.end(),n) == sequences.end()) sequences.push_back(n);
                continue;              
            }
        }
    }
    std::sort(numbers.begin(),numbers.end(),std::greater<int>());

    vector<int> output_number;
    for(vector<int>::iterator begin = numbers.begin();
        begin != numbers.end(); begin++){
        int n = *begin;
        if(find(sequences.begin(),sequences.end(),n) == sequences.end()){
            output_number.push_back(n);
        }
    }
    for(vector<int>::iterator begin = output_number.begin();
        begin != output_number.end();begin++){
            cout<< *begin;
            if(begin+1 != output_number.end())
                cout<<" ";
        }
    return 0;
}