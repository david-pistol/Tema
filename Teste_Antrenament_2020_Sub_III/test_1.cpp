#include <iostream>
#include <fstream>
using namespace std;

ofstream fout ("bac1.txt");


int main(){
    int x, y, a, b, c;
    cin >> x >> y;
    a = y;
    b = x;
    fout << y << " " << x << " ";
    while(a != 1 && b != 1){
        c = 3 * b - a;
        fout << c << " ";
        a = b;
        b = c;
    }
    fout.close();
    return 0;
}
