
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (){
int b;

if (b=9){
    char binary[b];
    int barcode[b];
    int c;
    for (c=0; c<b; c++){
        cout << "Enter a w for a wide bar or an n for a narrow bar: ";
        cin >> binary[c];
    }

    int d;
    for (d=0; d<b; d++){
        if (binary[d] == 'w')
            barcode[d] = 1;
        else if (binary[d] == 'n')
            barcode[d] = 0;
            cout << barcode[d];
    }
}
return 0;
}
