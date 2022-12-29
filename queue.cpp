#include<iostream>
#include<queue>

using namespace std;

int main()
{
	string nama, kerja;
	int banyak;
	
	queue<string>q;
	
	cout<<"-----------------------------"<<endl;
	cout<<"|    Antrian Pembeli Buku    |"<<endl;
	cout<<"-----------------------------"<<endl;
	
	cout<<" Banyaknya antrian: ";
	cin>>banyak;
	cout<<"______________________";
	cout<<endl;
	
	for (int i = 0; i < banyak; i++){
		cout <<i+1<< ". Nama : "; cin >> nama;
		cin.ignore();
		cout << "Pekerjaan : "; getline(cin, kerja);
		cout << endl;
		q.push(nama);
		(q.size() != 0);
	}
	
	cout<< "Antrian Pembeli Buku : ";
	
	for (int i = 0; i < banyak; i++){
		cout << endl;
		cout <<i+1<< ". "<< q.front();
		q.pop();
	}
}
