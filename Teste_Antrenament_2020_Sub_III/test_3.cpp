#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_3.txt");

int main(){
    int n, lungime_sir_1 = 0, lungime_sir_2 = 0, cnt = 1;
    while(fin >> n){
        if(n < 0 && lungime_sir_1 == 0)
            lungime_sir_1 = cnt;
        else if(n < 0)
            lungime_sir_2 = cnt;
        cnt++;
    }
    lungime_sir_1 = cnt - lungime_sir_1;
    if(lungime_sir_2 >= lungime_sir_1)
        cout << lungime_sir_2;
    else
        cout << lungime_sir_1;
    fin.close();
    return 0;
}
