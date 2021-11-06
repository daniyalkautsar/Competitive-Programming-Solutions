#include <bits/stdc++.h>
using namespace std;


int findGCDSum(int n, int a[])
{
    int GCDSum = 0;
    int tempGCD = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            tempGCD = 0;
            for (int k = i; k <= j; k++) {
                tempGCD = __gcd(tempGCD, a[k]);
            }
            GCDSum += tempGCD;
        }
    }
    return GCDSum;
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int totalSum = findGCDSum(n, a);
    cout << totalSum << "\n";
}
