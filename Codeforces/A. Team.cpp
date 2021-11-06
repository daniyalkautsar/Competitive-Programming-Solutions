#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, d;
    int c = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i<a; i++){
        int b = 0;
        for (int j = 0; j<3; j++){
            cin >> d;
            b += d;
        }
        if (b > 1){
            c = c + 1;
        }
    }
    cout << c;
}