#include <iostream>

using namespace std;

string product[] ={"Album  Formula of Love", "Post Card Jihyo"};
int harga[]   ={300000, 150000};
int m;

int main(){
    cout << "               Daftar Produk              \n";
    cout << "==========================================\n";
    cout << "No" << "     " <<  "Nama Produk" << "     " << "Harga" << endl;
    cout << "==========================================\n";
    for (m=0; m<2; m++){
        cout << m+1 << "     " << product[m] << "     " << harga[m] << endl;
    }
    cout << "==========================================\n";
    return 0;
    }


// Koding Disini ya kawan kawan

// pajak

// list_produk


// tambah produk

// diskon

/*
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
*/
