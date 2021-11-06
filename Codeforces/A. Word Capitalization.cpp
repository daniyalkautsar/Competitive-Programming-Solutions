#include <iostream>
#include <string>

using namespace std;

int main()
{
    string uc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string lc = "abcdefghijklmnopqrstuvwxyz";
    string b;
    cin >> b;
    for (int i = 0; i < 26; i++){
        if (b[0] == lc[i]){
            b.replace(0, 1, uc, i, 1);
            break;
        }
    }
    cout << b;
}
