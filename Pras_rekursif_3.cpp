/*
    Nama : Lukman Prasetyo Nugroho
    NPM  : 20430082

*/
#include <iostream>
 
using namespace std;


int main(){
    int n;
    int bil;
    int hasil;
    cout << "-- Program Deret --\n";
    cout << " Soal Nomer Tiga \n\n" ;

    cout << "Masukkan nilai ke-N : "; 
    cin >> n;

    for (int i = 1; i <= n; i++){
        hasil = i*2;
        cout << hasil <<" ";
        }
    
    cout << "\nNilai Deret N yang Anda cari: " << hasil;


    cout << "\n\n @LukmanPrasetyo " << endl;    
    return 0;
}