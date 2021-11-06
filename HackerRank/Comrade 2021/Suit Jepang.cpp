#include <bits/stdc++.h>

using namespace std;
// problem suit jepang
int main()
{
    string a, b;
    // getline(cin >> ws, a);
    // getline(cin >> ws, b);
    getline(cin >> ws, a);
    getline(cin >> ws, b);
    int poina = 0;
    int poinb = 0;
    int size = b.size();
    for (int i = 0; i < size; i++){
        // if (a[i] != b[i]){
        if (a[i] == 'G'){
            if (b[i] == 'K')
                poina += 2;
            else if (b[i] == 'B'){
                poinb += 1;
            }
        } else if (a[i] == 'K'){
            if (b[i] == 'B'){
                poina += 5;
            } else if (b[i] == 'G'){
                poinb += 2;
            }
        } else if (a[i] == 'B'){
            if (b[i] == 'G'){
                poina += 1;
            } else if (b[i] == 'K'){
                poinb += 5;
            }
        }
        // }
    }
    if (poina > poinb){
        cout << "Pak Joko menang";
    }
    else if (poina < poinb){
        cout << "Pak Galang menang";
    } else {
        cout << "Seri";
    }
}
