#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    int c = 0;
    cin >> a >> b;
    int arr[a];
    for (int i = 1; i <= a; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= a; i++){
        if(arr[b] <= arr[i] && arr[1] != 0 && arr[i] != 0){
            c++;
        }
    }
    cout << c;
}