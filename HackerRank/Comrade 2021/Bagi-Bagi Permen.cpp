#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> m >> n;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long maxsum = 0;
    long long maxanak = 0;
    for (int j = 0; maxsum <= m; j++){
        maxsum += arr[j];
        maxanak = j;
    }
    cout << maxanak;
}
