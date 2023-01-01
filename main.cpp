#include <iostream>

using namespace std;

string product[] ={"Album  Formula of Love", "Post Card Jihyo"};
int harga[]   ={300000, 150000};


// Koding Disini ya kawan kawan

// pajak
void pajak(){
    float cost,count,total,total1,total2,tax;
    cout << "\nHarga barang yang dibeli :";
    cin  >> cost;
    cout << "Jumlah barang yang dibeli :";
    cin  >> count;
    total1 = cost*count;
    cout << "Total harga adalah :" <<total1<<endl;

    tax = total*0.11;
    total2 = total1 + tax;
    cout << "\nPajak : "<<tax<<endl;
    cout << "==========================="<<endl;
    cout << "\nTotal pembayaran : " <<total2;
}



// list_produk

void list_produk(){
    int m;
    cout << "               Daftar Produk              \n";
    cout << "==========================================\n";
    cout << "No" << "     " <<  "Nama Produk" << "     " << "Harga" << endl;
    cout << "==========================================\n";
    for (m=0; m<2; m++){
        cout << m+1 << "     " << product[m] << "     " << harga[m] << endl;
    }
    cout << "==========================================\n";
 
 }



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

void diskon(){
    cout << "Diskon" << endl;

    int total_belanja, harga_akhir;

    cout << "Total Belanja: Rp. ";
    cin >> total_belanja;
    cout << endl;

    if ((total_belanja >= 100000) && (total_belanja < 500000)){
        harga_akhir = total_belanja - (0.1*total_belanja);
        cout << "Selamat, anda mendapatkan diskon 10%" << endl;
    }

    else if ((total_belanja >= 500000) && (total_belanja < 1000000)){
        harga_akhir = total_belanja - (0.2*total_belanja);
        cout << "Selamat, anda mendapatkan diskon 20%" << endl;
    }

     else if (total_belanja >= 1000000){
        harga_akhir = total_belanja - (0.3*total_belanja);
        cout << "Selamat, anda mendapatkan diskon 30%" << endl;
    }

    else {
        harga_akhir = total_belanja;
    }
    cout << "Total bayar: Rp. " << harga_akhir << endl;
    cout << harga_akhir;
}


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

