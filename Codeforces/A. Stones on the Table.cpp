#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c;
    cin >> c;
    string b;
    cin >> b;
    int take = 0;
    for (int i = 0; i < c; i++){
        if (b[i] == b[i+1] && b[i] != c-1){
            take++;
        } else if (b[i] == b[i+1]){
            take ++;
        }
    }
    cout << take;
}
