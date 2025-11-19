#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_9.txt");

int main(){
    int k, n, m, cnt_sec_max = 0, lungime_sec_max = 0, lungime_sec_curent = 0;
    fin >> k;
    while(fin >> n){
        if(n % k == 0)
            lungime_sec_curent++;
        else if(lungime_sec_curent > lungime_sec_max){
            lungime_sec_max = lungime_sec_curent;
            cnt_sec_max = 1;
            lungime_sec_curent = 0;
        }
        else if(lungime_sec_curent == lungime_sec_max){
            cnt_sec_max++;
            lungime_sec_curent = 0;
        }
    }
    if(lungime_sec_curent > lungime_sec_max){
        lungime_sec_max = lungime_sec_curent;
        cnt_sec_max = 1;
    }
    else if(lungime_sec_curent == lungime_sec_max){
        cnt_sec_max++;
    }
    cout << lungime_sec_max << " " << cnt_sec_max;
    return 0;
}


