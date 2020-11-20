

//Nama : Lukman Prasetyo Nugroho
//NPM : 20430082
//kelas : A

#include <iostream>
using namespace std;

int main (){
	
	int a;
	int b;
	char pilih;
	
	//mencari and
	bool c= (a>b) && (a>b);
	bool d= (a<b) && (a<b);
	bool e= (a>b) && (a<b);
	bool f= (a&b) && (a&b);
	
	cout << " Selamat datang di program tebak tebakan" <<endl <<endl;
	cout << " jika hasil perhitungan 1 benar " <<endl;
	cout << " Jika hasil perhitungan o salah " <<endl;
	cout << " Pilih huruf sesuai keinginan " <<endl;
	cout << " akan menampilkan logika and,or,not " <<endl <<endl;
	
	
	cout << "nilai a = ";
	cin >>a;
	cout <<" pilih huruf berikut  c,d,e,f,g,h,i,j,k = ";
	cin >>pilih;
	cout << "nilai b ";
	cin >>b;
	
	//perhitungan and 
	
	cout << " hasil perhitungan and " <<endl <<endl;
	
	if (pilih = 'c'){
		c= (a>b) && (a>b);
		cout << " hasil c = " << c <<endl;
	} 
	if (pilih = 'd'){
		d= (a<b) && (a<b);
		cout << " hasil d = " << d <<endl;
	}		
	if (pilih = 'e'){
		d= (a>b) && (a<b);
		cout << " hasil e = " << e <<endl;
	}
	if (pilih = 'f'){
		 f= (a&b) && (a&b);
		cout << " hasil f = " << f <<endl;
	}
	
	//perhitungan or
	
	bool g= (a>b) || (a>b);
	bool h= (a<b) || (a<b);
	bool i= (a>b) || (a<b);
	bool j= (a&b) || (a&b);
	
	cout << " Hasil perhitungan or " <<endl << endl;
	
	if (pilih = 'g'){
		g= (a>b) || (a>b);
		cout << " hasil g = " << g <<endl;
	} 
	if (pilih = 'h'){
		h= (a<b) || (a<b);
		cout << " hasil h = " << h <<endl;
	}		
	if (pilih = 'i'){
		i= (a>b) || (a<b);
		cout << " hasil i = " << i <<endl;
	}
	if (pilih = 'j'){
		 j= (a&b) || (a&b);
		cout << " hasil j = " << j <<endl;
	}
		
	//perhitungan not
		bool k= not (a&b) || (a<b);
	
	if (pilih = 'k'){
		 k= not (a&b) || (a&b);
		cout << " hasil k = " << k <<endl;
	}
	
return 0;	
}
