

//Nama : Lukman Prasetyo Nugroho
//NPM : 20430082
//kelas : A


#include <iostream>
using namespace std;

int main (){
	
	float a,b,hasil;
	char aritmatika;
	
	cout<< " Selamat datang di kalkulator aritmatika " <<endl <<endl;
	
	// mulai
	
	cout << " Masukkan Nilai Pertama : ";
	cin >>a ;
	
	cout << " Pilih Operator ,*,/,+,- : ";
	cin >> aritmatika;
	
	cout << " Masukkan Nilai Kedua : ";
	cin >>b;
	
	//perhitungan 
	if (aritmatika == '+'){
		hasil = a + b ;
	} else if (aritmatika  == '-'){
		hasil = a - b ;
	} else if (aritmatika == '*'){
		hasil = a * b ;
	} else if (aritmatika == '/'){
		hasil = a / b ;
	} else {
		cout << " operator anda salah " <<endl;
	}
	
	cout<< " Hasil " << hasil << endl;
	
	
	return 0;
}
