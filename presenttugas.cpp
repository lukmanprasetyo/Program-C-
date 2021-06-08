#include <iostream>
using namespace std;

///deklarasi 
struct nama {
	string Nama;

	//pointer
	nama *next;

};

int main (){

	//inisialisasi
	nama *user1, *user2, *user3, *user4;

	user1 = new nama();
	user2 = new nama();
	user3 = new nama();
	user4 = new nama();

	//pengisian nama 1

	user1->Nama= "dhanu";
	user1->next = user2;
	cout << "dhanu = " << &user1 << endl;

	//pengisian nama 2
	user2->Nama= "cintya";
	user2->next = user3;
	cout << "cintya = " << &user2 << endl;

	//pengisian nama 3
	user3->Nama= "Bakdi";
	user3->next = user4;
	cout << "Bakdi = " << &user3 << endl;

	//pengisian nama 4
	user4->Nama= "amir";
	user4->next = NULL;
	cout << "amir = " << &user4 << endl;

	//cout
	nama *cur;
	cur = user1;
	while( cur !=NULL){
		cout << "Nama :" <<cur-> Nama << endl;

		cur = cur->next;
	}


}
