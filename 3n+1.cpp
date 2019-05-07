// n /= 2 (n%2==0)
// 3n+1 /=2 (n%2!=0)
#include <iostream>

using namespace std;

int main(int argc,const char* argv[]){
    int n = 1;
    cin >> n;

    int counter = 0;

    while( n != 1 ){
        if( n%2 != 0 )
            n = (3*n+1)/2;
        else
            n /= 2;
        counter++;
        
    }
    cout<<counter;
    return 0;
}
