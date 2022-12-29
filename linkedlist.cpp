#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
     int queue[5];
     int depan = -1;
     int belakang = -1;
     int pilihan, data, i;
    
     do{
     cout<<("MENU\n");
     cout<<("1. Input data\n2. Pengambilan data\n3. View\n4. Exit\n");
     cout<<("Pilihan = ");
     cin>>pilihan;

     
          switch (pilihan)
          {
               case 1:
               if (belakang < 4 )
               {
                    cout<<"Masukkan angka acak = ";
                    cin>>data;
                    queue[belakang+1] = data;
                    belakang++;
                    if (belakang == 0)
                    depan = 0;
               }
               else
               cout<<"Antrian penuh!\n";
               break;
               case 2:
               if (depan <= belakang)
               {
                    cout<<"Data keluar = "<<queue[depan];
                    depan++;
                    cout<<endl;
               }
               else
               cout<<("Antrian kosong!\n");
               break;
               case 3:
               for(i=depan; i<=belakang; i++)
               cout<<queue[i]<<" ";
               cout<<"\n";
               break;
          }
          cout<<"--------------------------------------";
          cout<<endl;
     }
     while (pilihan != 4);
}
