/*
    Nama : Lukman Prasetyo Nugroho
    NPM  : 20430082

*/

#include <iostream>
using namespace std;

int main () {
    
    int n;
    int hasil;
    int n_1;
    int n_2;

    cout << "-- Program Deret --\n";
    cout << " Soal Nomer Satu \n\n" ;
    
    cout << " Masukkan Nilai ke-N : ";
    cin >>n;

    n_1 = 1;
    n_2 = 3;
    cout << n_1 <<" ";   
    
    for (int i = 1; i< n; i++){
        n_2 = n_1;
        n_1 = hasil;
        cout << hasil << " ";
    }
    
    cout << " \nNilai deret N yang anda cari : " << hasil;
  
    
    cout << "\n\n @LukmanPrasetyo " << endl;
    
    return 0;
}
