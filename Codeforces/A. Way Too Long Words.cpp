#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    string b;
    string arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
        if (arr[i].length() > 10){
            b = arr[i];
            cout << b[0] << b.length() - 2 << b[b.length()-1] << endl;
        } else {
            cout << arr[i] << endl;
        }
    }
}