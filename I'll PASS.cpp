#include <iostream>
#include <string>
using namespace std;

int 
PAT_filter(string& str){
    cout<<"str="<<str<<endl;
    string::iterator begin = str.begin();
    unsigned int p_counter = 0, a_counter = 0,t_counter = 0;

    while(begin!=str.end()){
        switch(*begin){
            case 'P':p_counter++; break;
            // case 'A':a_counter++; break;
            case 'T':t_counter++; break;
            default:return 0;
        }
        if(p_counter > 1 || t_counter > 1) return 0;
        begin++;
    }
    
    int p_begin = str.find_first_of('P');
    int t_begin = str.find_first_of('T');

    if(t_begin>p_begin) return 0;

    while(p_begin < t_begin){
        if(str[p_begin]!='A')
            return 0;
        p_begin++;
    }
    return 1;
}
int
main(int argc,const char* argv[]){
    string single_line;
    unsigned int total_line = 0;
    cin>>total_line;
    cin.get(); //将上次输入剩余的空格读出

    while(total_line!=0){
        getline(cin,single_line);
        if(PAT_filter(single_line))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        // cout<<total_line<<":"<<single_line<<endl;
        total_line--;
    }
    return 0;
}
