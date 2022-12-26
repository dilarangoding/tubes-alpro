#include <iostream>

using namespace std;

string product[] ={"Album  Formula of Love", "Post Card Jihyo"};
int harga[]   ={300000, 150000};

// Koding Disini ya kawan kawan

// pajak

// list_produk


// tambah produk

void tambah_produk(){
     string nama_barang[5], harga_barang [5];
        int jml_barang;
        cout << " " << endl;
        cout << "Input Daftar Nama Barang dan Harganya : ";

     cin >> jml_barang;
     string nama,harga;
     for ( int i = 0; i<jml_barang; i++) {

     cout << " Nama Barang " << i + 1 << " : " ;
     cin >> nama ;
     cout << " Harga Barang " << " : " ;
     cin >> harga;

     nama_barang  [i] = nama;
     harga_barang [i] = harga;

 }
}


// diskon


int main(){
    int menu_dashboard;
    tambah_produk();
    cout << "========== Dashboard ==========="<<endl;
    cout << "======= Twice Merchandise ======"<<endl;
    cout << "1. Produk"<<endl;
    cout << "2. Tambah Produk"<<endl;
    cout << "3. Transaksi"<<endl;
    cout << "4. Exit"<<endl;
    cout << "Masukan Menu [1-4] : ";
    cin  >> menu_dashboard;

    switch (menu_dashboard)
    {
    case 1:
        cout << "Produk";
        break;
    case 2:
        cout << "Tambah Produk";
        break;
    case 3:
        cout << "Transaksi";
        break;
    case 4:
        cout << "Selamat tinggal"<<endl;
        return 0;
        break;
    default:
        cout << "Menu yang anda inputkan salah!"<<endl;
        break;
    }

}

