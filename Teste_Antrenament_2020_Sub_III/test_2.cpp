#include <fstream>
#include <iostream>
using namespace std;

ifstream fin ("bac_2.txt");

int main(){
    int v[3], n;
    while(fin >> n){
        if(n % 10 == 0 && n / 10 % 10 == 2){
            if(n > v[2]){
                v[0] = v[1];
                v[1] = v[2];
                v[2] = n;
            }
            else if(n > v[1] && n < v[2]){
                v[0] = 1;
                v[1] = n;
            }
            else if(n > v[0] && n < v[1])
                v[0] = n;
        }
    }
    cout << v[0] << " " << v[1] << " " << v[2];
    return 0;
}
