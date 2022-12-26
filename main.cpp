#include <iostream>

using namespace std;

string product[] ={"Album  Formula of Love", "Post Card Jihyo"};
string harga[]   ={"300000", "150000"};

// Koding Disini ya kawan kawan

// pajak

// list_produk


// tambah produk

// diskon


int main(){
    int menu_dashboard;

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
