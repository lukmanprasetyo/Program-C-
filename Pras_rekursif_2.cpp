/*
    Nama : Lukman Prasetyo Nugroho
    NPM  : 20430082

*/

#include<iostream>
using namespace std;

int rumus (int bil) {
    if(bil==1) return 1;
    else 
    return bil+rumus(bil-1);
}

int main(){
    int n;
    int bil;
    cout << "--- Program Deret ---\n";
    cout << " Soal Nomer Dua \n\n" ;

    cout << "Masukkan nilai ke-N : "; 
    cin >> n;

    for (int i = 1; i <= n; i++){
        cout << i <<" ";
        }
        
    cout << "\nNilai deret N : " << n;
    cout<<"\nJumlah Semua Deret  : "<<rumus(n); 

    cout << "\n\n @LukmanPrasetyo " << endl;    
    return 0;
}

