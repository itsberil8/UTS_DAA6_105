#include<iostream>
#include<stack>

using namespace std;

int main()
{
	string nama, status;
	int banyak;
	
	stack<string>q;
	
	cout<<"-----------------------------"<<endl;
	cout<<"|  Program Urutan Keluarga  |"<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<" Banyaknya nama: ";
	cin>>banyak;
	cout<<"===================="<<endl;
	cout<<"Masukkan nama dari yang termuda hingga tertua";
	cout<<endl;
	
	for (int i = 0; i < banyak; i++){
		cout <<i+1<< ". Nama : "; cin >> nama;
		cin.ignore();
		cout<<"Status: "; cin>>status;
		cout << endl;
		q.push(nama);
		(q.size() != 0);
	}
	
	cout<< "Urutan dari yang tertua hingga termuda : ";
	
	for (int i = 0; i < banyak; i++){
		cout << endl;
		cout <<i+1<< ". "<< q.top();
		q.pop();
	}
}
