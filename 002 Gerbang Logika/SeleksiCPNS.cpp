#include <iostream>
using namespace std;

int main(){
    string nama;
    int nilai, tinggi_badan;

    nama = "Mas Asepp";
    nilai = 500;
    tinggi_badan = 170;
    
    // Syarat Lulus:
    // 1. Nilai harus lebih dari 500 
    // 2. Tinggi badan 160
    
    if(nilai > 500 && tinggi_badan > 160){
        cout << nama << " anda di nyatakan lulus" << endl;
        cout << nama << " anda di nyatakan lulus" << endl;
        cout << nama << " anda di nyatakan lulus" << endl;
        cout << nama << " anda di nyatakan lulus" << endl;
    } else if(nilai > 500){
        cout << nama << " anda pintar tapi pendek" << endl;
    } else if(tinggi_badan > 160){
        cout << nama << " anda tinggi tapi bodoh" << endl;
    }
    else {
        cout << nama << " anda di nyatakan gagal" << endl;
    }

}