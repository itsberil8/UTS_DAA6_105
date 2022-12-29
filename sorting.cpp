#include <iostream>

using namespace std;

struct mahasiswa{
	string name;
	int id;
};

int main()
{
	int banyak;
	cout<<"---------------------"<<endl;
	cout<<"Banyak mahasiswa : "; cin>>banyak;
	cout<<"---------------------"<<endl;
	cout<<"\n";
	
	mahasiswa q[10];
	
	for(int i = 0 ;i  < banyak; i++){
		cout<<"Nama Mahasiswa "<<i+1<<" : ";
		cin>>q[i].name;
		cout<<"NIM Mahasiswa "<<i+1<<"	: ";
		cin>>q[i].id;

	}
	
	for (int j = 0; j < banyak - 1; j++){
    	for (int j = 0; j < banyak - 1; j++){
    		if (q[j].id > q[j+1].id){
    			swap (q[j].id, q[j+1].id);
    			swap (q[j].name, q[j+1].name);
    			cout << endl;
			}
		}
	}
	
	cout << "\n--------------------------------------\n";
	cout << "   Urutan Mahasiswa Berdasarkan NIM  ";
	cout << "\n--------------------------------------\n";
	cout << endl;

	for (int i= 0; i< banyak; i++){
		cout << "  " << q[i].name<< " "<< q[i].id<< "\n";
	}
	
}
