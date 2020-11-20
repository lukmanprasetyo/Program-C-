#include <iostream>
using namespace std;
	
int main(){
	
	char nama [100];
	
	//tampilan awal
	cout<<" Silahkan Masukkan Nama	:";
	cin>>	nama;
	cout<<endl;
	cout<<"	Hai " <<nama<<endl;
	cout<<"	Selamat Datang di Program Menghitung Rata rata tekan enter untuk lanjut";
	cout<<"\n\n";
	system("pause");
	
	
	//rumusinputnya
	int a[20];
	int jumlahnilai;
	int rataratanilai;
	
	//memasukkannilai
	cout<<"		Masukkan Nilai di Setiap Pertemuan\n";
	
	cout<<"Pertemuan ke - 1	=";
	cin>>	a[1];
	cout<<"Pertemuan ke - 2	=";
	cin>>	a[2];
	cout<<"Pertemuan ke - 3	=";
	cin>>	a[3];
	cout<<"Pertemuan ke - 4	=";
	cin>>	a[4];
	cout<<"Pertemuan ke - 5	=";
	cin>>	a[5];
	cout<<"Pertemuan ke - 6	=";
	cin>>	a[6];
	cout<<"pertemuan ke - 7	=";
	cin>>	a[7];
	cout<<"Pertemuan ke - 8	=";
	cin>>	a[8];
	cout<<"Pertemuan ke - 9	=";
	cin>>	a[9];
	cout<<"Pertemuan ke - 10	=";
	cin>>	a[10];
	cout<<"Pertemuan ke - 11	=";
	cin>>	a[11];
	cout<<"Pertemuan ke - 12	=";
	cin>>	a[12];
	cout<<"Pertemuan ke - 13	=";
	cin>>	a[13];
	cout<<"Pertemuan ke - 14	=";
	cin>>	a[14];
	cout<<"Pertemuan ke - 15	=";
	cin>>	a[15];
	cout<<"Pertemuan ke - 16	=";
	cin>>	a[16];
	
	
	//rumusmenghitungjumlahdanratarata
	jumlahnilai		=	(a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+a[11]+a[12]+a[13]+a[14]+a[15]+a[16]);
	rataratanilai	=	jumlahnilai/16;
	
	cout<<"	jumlah nilai= "<<jumlahnilai<<"\n";
	cout<<"	Jumlah rata rata nilai= "<<rataratanilai<<"\n";
	
	return 0;
		
}
