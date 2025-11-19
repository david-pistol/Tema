#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_4.txt");

int main(){
    int n, m, cnt = 0;
    fin >> m;
    while(fin >> n){
        if(m == n)
            cnt++;
        else if(n != m && cnt == 1){
            cout << m << " ";
            cnt = 0;
        }
        else if(n != m && cnt != 1)
            cnt = 0;
        m = n;
    }
    if(cnt == 1)
        cout << n;
    fin.close();
    return 0;
}
