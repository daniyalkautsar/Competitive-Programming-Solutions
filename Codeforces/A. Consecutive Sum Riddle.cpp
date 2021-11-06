#include <iostream>

using namespace std;

void solve(){
    long long b, temp;
    cin >> b;
    if (b % 2 == 1){
        temp = b/2;
        cout << temp << " " << temp + 1;
    } else {
        temp = -b;
        cout << 1+temp << " " << b;
    }
    cout << endl;
}

int main()
{
    int a;
    cin >> a;
    while(a--){
        solve();
    }
}
