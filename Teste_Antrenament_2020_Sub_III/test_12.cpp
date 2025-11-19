///nu am stiut sa fac 
///se face bucla infinita
#include <iostream>
#include <fstream>
using namespace std;

ofstream fout ("bac_12.txt");

int main(){
    int x;
    cin >> x;
    if(x <= 10)
        for(int i = x; x >= 1; x--)
            fout << i << " ";
    else{
        while(x > 10){
            if(x <= 10){
                for(int i = x; i <= 1; i--)
                    fout << i << " ";
                break;
            }
            else if(x > 10 && x % 2 == 0)
                fout << x / 2 << " ";
            else
                fout << x - 1 << " ";
        }
    }
    return 0;
}
