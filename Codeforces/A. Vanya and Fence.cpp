#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    int size = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > h){
            size += 2;
        } else {
            size++;
        }
    }
    cout << size;
}
