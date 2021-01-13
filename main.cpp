#include <iostream>
using namespace std;

int main() {
	int N, T, value;
    cin >> T;                                   // // T = 2

    while(T--) {                                // // 1st Loop
        cin >> N;                               // // N = 3 

        int sum {0};                            //  //  sum = 0/
        for(int i = 0; i < N; ++i) {
            cin >> value;                     // { // // 1 / 2 / 3 }            1st thing that visible in terminal 1/2/3

            int result {1};                     // // result = 1/1/1
            for(int j = 0; j < i + 1; ++j)
                result *= value;                // // result = 1/4/27                     cout # 1  1/4/27
                    cout<<result<<"\n";         // // value
                     
                sum += result;                    // // sum = 1+4/5+27/32                  cout # 2   1/5/32
                    cout<<sum<<"\n";
        }
        cout << sum <<"\n";                     // // sum = 1/5/32          cout  # 3 (Not Visible Until the End) [32] => ONLY OUTPUT
    }
 
	return 0;
}