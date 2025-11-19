#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_8.txt");

int main(){
    int v_poz[10] = {0}, v_cnt[10] = {0}, n, poz = 1, cnt_max = 0;
    while(fin >> n){
        v_poz[n % 10] = poz;
        v_cnt[n % 10] += 1;
        if(v_cnt[n % 10] > cnt_max)
            cnt_max = v_cnt[n % 10];
        poz++;
    }
    for(int i = 0; i <= 9; i++)
        if(v_cnt[i] == cnt_max)
            cout << v_poz[i] << " ";
    return 0;
}
