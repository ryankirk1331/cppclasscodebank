#include <iostream>
using namespace std;

// ********************************************** Reverse Number/ For Loops % My Answer ***************************************

int main(){
    int n;
    cin>>n;

    
    int number = 0;

    for (int i = 0; i <= n; ++i){
        int last_digits = n % 10;
        n /= 10;
        number = number * 10 + last_digits;

    }
    cout<<number<<" "<<number * 3<<"\n";

   return 0;
}





