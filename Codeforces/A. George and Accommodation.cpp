#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n];
    int q[n];
    int empty = 0;
    for (int i = 0; i < n; i++){
        cin >> p[i] >> q[i];
        if (q[i]-p[i] >= 2){
            empty++;
        }
    }
    cout << empty;
}
