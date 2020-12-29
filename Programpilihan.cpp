//Program
//Nama : Lukman Prasetyo Nugroho

#include <iostream>
using namespace std;

int main (){

	char pilihan;
	cout << " ----------- Ilmu Komputer Mart ----------- " << endl;
	cout << " -------- Jln.Gatot Subroto No.100 -------- " << endl;
	cout << " ---Yosodadi Kota Metro Kode Pos 34.111 --- " << endl;
	cout << " ========================================== " << endl;
	cout << " ======= [PILIHAN PRODUK] ======= " << endl;
	cout << endl;

	cout << "A. Susu Dancow " << endl;
	cout << " 	1. Ukuran Kecil " << endl;
	cout << " 	2. Ukuran Sedang " << endl;
	cout << " 	3. Ukuran Besar " << endl;

	cout << "B. Susu Bendera " << endl;
	cout << " 	1. Ukuran Kecil " << endl;
	cout << " 	2. Ukuran Sedang " << endl;
	cout << " 	3. Ukuran Besar " << endl;

	cout << "C. Susu SGM" << endl;
	cout << " 	1. Ukuran Kecil " << endl;
	cout << " 	2. Ukuran Sedang " << endl;
	cout << " 	3. Ukuran Besar " << endl;

	cout << "0.Program Keluar " << endl;
	cout << "*****************" << endl;
	cout << " Masukkan Kode Jenis [A..C]  : ";
	cin >> pilihan;

	cout << endl;

	switch (pilihan){

		case 'A':
		cout << "A. Susu Dancow " << endl;
		cout << " 	1. Ukuran Kecil " << endl;
		cout << " 	2. Ukuran Sedang " << endl;
		cout << " 	3. Ukuran Besar " << endl;
		break;

		case 'B':
		cout << "B. Susu Bendera " << endl;
		cout << " 	1. Ukuran Kecil " << endl;
		cout << " 	2. Ukuran Sedang " << endl;
		cout << " 	3. Ukuran Besar " << endl;
		break;

		case 'C':
		cout << "C. Susu SGM" << endl;
		cout << " 	1. Ukuran Kecil " << endl;
		cout << " 	2. Ukuran Sedang " << endl;
		cout << " 	3. Ukuran Besar " << endl;
		break;

		default:
		cout << " Maaf, format yang anda masukkan salah " << endl;
	};

	return 0;
}