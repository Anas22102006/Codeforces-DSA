#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    if(n % 2 == 0){
        cout << n / 2 << endl;
        return 0;
    }
 
    for(long long i = 3; i * i <= n; i += 2){
        if(n % i == 0){
            cout << 1 + (n - i) / 2 << endl;
            return 0;
        }
    }
 
    cout << 1 << endl;
    return 0;
}