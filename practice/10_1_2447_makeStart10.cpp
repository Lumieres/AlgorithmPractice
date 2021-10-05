#include <iostream>
#include <cmath>

using namespace std;
char arrays[10001][10001] = {};

void makeStar(int length, int x, int y){
    for(int i = x; i < length; i++){
        for(int j = y; j < length; j++){
            arrays[i][j] = '*';
        }
    }
}

int main(){
    cout << (int)(3/2) << endl;
}