///am aflat cum se face problema

#include <iostream>
#include <fstream>
using namespace std;

ofstream fout ("bac_6.txt");

bool div_p1[10], div_p2[10];

int main(){
    int p1, p2;
    cin >> p1 >> p2;
    for(int j = 0; j <= 9; j++){
        for(int i = 2; i <= 9; i++){
            if(p1 % i == 0 && (p1 / i) / 10 != 0)
                
            if(p2 % i == 0)
        }
    }
    return 0;
}
