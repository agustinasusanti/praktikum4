#include <iostream>
using namespace std;

int total;

int main(){
    int total = 5;
    cout << "total lokal = " << total << endl;
    ::total = 7;
    cout << "total global = " << ::total;
}
