#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c;
    string b;
    cin >> c;
    int t = 1;
    while (t > 0) {
        t++;
        c++;
        b = to_string(c);
        int a = 0;
        for (int i = 0; i < 4; i++){
            for (int j = i+1; j < 4; j++) {
                if (b[i] == b[j]){
                    a++;
                    break;
                }
            } 
        }
        if (a == 0) {
            break;
        }
    }
    cout << c;
}
