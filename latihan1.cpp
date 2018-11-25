#include <iostream>
using namespace std;

int hitung (int, int);
int kurang (int, int);
int bagi (int, int);
void cetak(int);

int main (){
    int a=hitung(4,5);
    cetak(a);
    int c=kurang(11,7);
    cetak(c);
    int e=bagi(14,2);
    cetak(e);
}
int hitung(int a, int b){
    return a*b;
}
int kurang(int c, int d){
    return c-d;
}
int bagi(int e, int f){
    return e/f;
}
void cetak (int a){
    cout << "nilai variable adalah : " << a << endl;
}
