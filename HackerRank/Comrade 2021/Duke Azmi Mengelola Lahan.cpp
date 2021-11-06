#include <bits/stdc++.h>
using namespace std;


int hasil(int n){
    int* aa = new int[n + 1];
    aa[0] = 0;
    aa[1] = 1;
    for (int i = 2; i <= n; ++i){
        aa[i] = INT_MAX;
        for (int j = 1; i - (j * j) >= 0; ++j){
            aa[i] = min(aa[i],aa[i - (j * j)]);
        }
        aa[i] += 1;
    }
    int ret = aa[n];
    delete[] aa;
    return ret;
}

int main()
{
    int a;
    cin >> a;
    long long arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
        cout << hasil(arr[i]) << endl;
    }
}
