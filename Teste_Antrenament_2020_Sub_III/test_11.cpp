#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_11.txt");

int main(){
    int n, m, nr_apar = 1;
    fin >> m;
    while(fin >> n){
        if(m == n)
            nr_apar++;
        else{
            cout << m << " " << nr_apar << " ";
            nr_apar = 1;
        }
        m = n;
    }
    cout << m << " " << nr_apar;
    fin.close();
    return 0;
}
