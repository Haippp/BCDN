#include <iostream>
using namespace std;

int main(){
    char pilihan = 'a';
    
    if(pilihan != 'y'){
        cout << "Silahkan pilih menu" << endl;
        cout << "1" << endl;
        cout << "2" << endl;
    } else {
        cout << "Terimakasih sudah mampir" << endl;
    }
}