#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("bac_10.txt");

int main(){
    int n, m, cnt_sec_curent = 0, cnt_sec_max = -1, ratia_max = 0, ratia_curent = 0, ratia_prece = 0;
    fin >> m;
    fin >> n;
    ratia_curent = n - m;
    cnt_sec_curent = 1;
    ratia_prece = ratia_curent;
    m = n;
    while(fin >> n){
        ratia_curent = n - m;
        if(ratia_prece == ratia_curent)
            cnt_sec_curent++;
        else if(ratia_prece != ratia_curent && cnt_sec_curent > cnt_sec_max){
            ratia_max = ratia_curent;
            cnt_sec_max = cnt_sec_curent;
            cnt_sec_curent = 1;
            ratia_prece  = n - m;
        }
        else{
            cnt_sec_curent = 1;
            ratia_prece = ratia_curent;
        }

        m = n;
    }
    if(cnt_sec_curent > cnt_sec_max){
        ratia_max = ratia_curent;
    }
    cout << ratia_max;
    return 0;
}
