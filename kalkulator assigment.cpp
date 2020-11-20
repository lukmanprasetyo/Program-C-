

//Nama : Lukman Prasetyo Nugroho
//NPM : 20430082
//kelas : A

#include <iostream>
using namespace std;

int main (){
	
	int a;
	int b;
	
	cout << " Selamat datang di Kalkulator assigment " <<endl <<endl;
	cout << " Nilai a = ";
	cin >>a;
	cout << " Nilai b = ";
	cin >> b ; 
	
	cout << " Berikut Hasil dari nilai a dan b" << endl <<endl;
	
	a +=b;
	cout << " a ditambah b = " << a << endl;
	a -=b;
	cout << " kemudian dikurangi b = " << a << endl;
	a *=b;
	cout << " dikali b = " << a << endl;
	a /=b;
	cout << " dibagi b = " << a << endl;
	a %=b;
	cout << " sisa pembagian = " << a  <<endl;	
} 
