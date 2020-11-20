#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	
	int a, b, nilai[10];
	float ratarata,jumlah;
	
	cout<<"Banyaknya Data = ";
	cin>>b;
	cout<<endl;
	
	for (a=0; a<b;a++)
	{
		cout<<"Data ke-"<<a+1<<" = ";
		cin>>nilai [a];
		
		jumlah+=nilai[a];
	}
	
	ratarata=jumlah/b;
	cout<<endl;
	cout<<"Nilai Total = "<<jumlah<<endl;
	cout<<"Nilai Rata-rata= "<<ratarata<<endl;
	
	getch();
}
