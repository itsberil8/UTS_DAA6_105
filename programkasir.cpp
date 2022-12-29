#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];

    cout<<"=============================\n";
    cout<<"        Kasir Beril\n";
    cout<<"=============================\n\n";

    cout<<"SELAMAT DATANG DI KASIR BERIL!!"<<endl;
    
    cout<<"Masukkan Jumlah Beli :";
    cin>> jumlah_beli; 

    for (int i=0;i<jumlah_beli;i++){
        cout<<"\nMasukan Barang ke- "<<i+1<<"\n";
        cout<<"Nama Barang : ";
        cin>>nama_barang[i]; 

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i];

        cout<<"Harga Barang : ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i];
        total_semua += total[i];

    }
    cout<<"\n===========================";
    cout<<"\n      Tabel Belanja    ";
    cout<<"\n===========================";

    cout<<"\nNo Barang  Jumlah  Harga   Total\n";
    cout<<"---------------------------------"<<endl;
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<setw(8)<<nama_barang[i]<<setw(6)<<jumlah[i]<<setw(8)<<harga[i]<<setw(10)<<total[i]<<endl;
    }

    if(total_semua>=100000){
        diskon=0.06*total_semua;
    }else if(total_semua>= 50000){
        diskon=0.04;
    }else if(total_semua>= 25000){
        diskon=0.02;
    }else{
        diskon=0;
    }

    cout<<"Jumlah Bayar : Rp."<<total_semua<<endl;
    cout<<"Diskon : Rp."<<diskon<<endl;
    cout<<"Total Bayar : Rp."<<total_semua - diskon<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua-diskon))<<endl;
    cout<<"TERIMA KASIH! SILAHKAN BELANJA KEMBALI";
    return 0;
}
