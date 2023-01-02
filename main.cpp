#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>
#include <vector>

using namespace std;

vector <string> code;
vector <string> product;
vector <int> stock;
vector <int> price;

vector <string> cart_code;
vector <string> cart_product;
vector <int>    cart_qty;
vector <int>    cart_price;

// clear sceren

void clrscr()
{
    system("cls");
}

// display_product

void display_product(){
    clrscr();
    cout << "=========================== List Produk =============================="<<endl;
    cout << "======================== Twice Merchandise ==========================="<<endl;
    cout << left << setw(5) << "No" << left << setw(15 ) << "Kode Produk" << left << setw(30) << "Nama Produk" << left << setw(8) << "Stok"  << left << setw(15) << "Harga Produk" << endl;
    cout << "======================================================================\n";
    for (int i =0; i < product.size(); i++){
         cout << left << setw(5)  << i + 1
              << left << setw(15) << code[i]
              << left << setw(30) << product[i]
              << left << setw(8)  << stock[i]
              << left << setw(15) << price[i]
              << endl;
    }
     cout << "======================================================================\n";
 }

// tambah produk

void add_product(){
     clrscr();
     int jml_product,harga_product,stok_product;
   
     cout << "========== Tambah Produk ==========="<<endl;
     cout << "========= Twice Merchandise ========"<<endl;
     cout << " " << endl;
     cout << "Jumlah produk yang ingin ditambahkan : ";
     cin >> jml_product;
     cout << " " << endl;

     for ( int i = 0;  i < jml_product; i++) {
        string nama_product, code_product;

        cout << "Kode produk " << i + 1 << " : ";       
        getline(cin >> ws, code_product);

        cout << "Nama produk   : ";     
        getline(cin >> ws, nama_product);

        cout << "Stok produk   : ";
        cin  >> stok_product;

        cout << "Harga produk  : ";
        cin  >> harga_product;

        code.push_back(code_product);
        product.push_back(nama_product);
        stock.push_back(stok_product);
        price.push_back(harga_product); 

        cout << " "<<endl;  
    }
    

}

// diskon

int discount(int subtotal){

    int harga_akhir;

    if ((subtotal >= 350000) && (subtotal <= 500000)){
        harga_akhir = subtotal * 0.1;
    }

    else if ((subtotal >= 500000) && (subtotal <= 1000000)){
        harga_akhir = subtotal * 0.2;
    }

     else if (subtotal >= 1000000){
         harga_akhir = subtotal * 0.3;
    }

    else {
        harga_akhir = 0;
    }
    return harga_akhir;
}

// pajak
int tax(int subtotal){
    float tax;
    tax = subtotal * 0.11;
    return tax; 
}

// Search Product

int search_product(string search, vector <string> code){

     for (int i = 0; i < code.size(); ++i)
        {
            if (code[i] == search)
            {
                return i;
            }
        }

        return -1;
}

// receipt

void receipt(int subtotal){
    float diskon = discount(subtotal);
    float pajak = tax(subtotal - diskon);
    float total = (subtotal - diskon ) +  pajak;
    long bayar, kembali = total - bayar;

    cout << "\n\n=========================== Struk Belanja ============================"<<endl;
    cout << "========================== Twice Merchandise ========================="<<endl;
    cout << left << setw(5) << "No" << left << setw(15) << "Kode Produk" << left << setw(30) << "Nama Produk" << left << setw(8) << "Qty" << left << setw(15) << "Harga Produk" << endl;
    
    for (int i =0; i < cart_code.size(); i++){
         cout << left << setw(5)  << i + 1
              << left << setw(15) << cart_code[i]
              << left << setw(30) << cart_product[i]
              << left << setw(8)  << cart_qty[i]
              << left << setw(15) << cart_price[i]
              << endl;
    }
    cout << "----------------------------------------------------------------------\n";
    cout << left << setw(45) << " " << left << setw(15) << "Sub Total : Rp." << subtotal <<endl;
    cout << left << setw(45) << " " << left << setw(15) << "Diskon    : Rp." <<  diskon  <<endl;
    cout << left << setw(45) << " " << left << setw(15) << "PPN 11%   : Rp." <<  pajak   <<endl;
    cout << left << setw(45) << " " << left << setw(15) << "Total     : Rp." <<  total   <<endl;
    cout << left << setw(45) << " " << left << setw(15) << "Bayar     : Rp.";
    cin  >> bayar;
    cout << left << setw(45) << " " << left << setw(15) << "Kembali   : Rp." << kembali  <<endl;
}

// Transaction

void transaction(vector <string> code){
    string search;
    int j, index,qty, subtotal;

    display_product();
    
    cout << "\n\n============================= Transaksi =============================="<<endl;
    cout << "----------------------------------------------------------------------\n";
    cout << "Jumlah Barang yang ingin dibeli :";
    cin  >> j;
    cout << " " << endl;

    for(int i = 0; i < j; i++){
        cout << "Masukan Kode Produk " << i + 1 << " : ";
        cin  >> search;
        cout << "Masukan Jumlah Barang : ";
        cin  >> qty;
        index = search_product(search, code);
        
        subtotal += qty *  price[index];
        
        stock[i] -= qty;
        cart_code.push_back(code[index]);
        cart_product.push_back(product[index]);
        cart_qty.push_back(qty);
        cart_price.push_back(price[index]);
        
        cout << " " << endl;
    }

    receipt(subtotal);
}


int main(){
    int menu_dashboard;
    string repeat;

    do
    {
        clrscr();
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
                display_product();
                break;
            case 2:
                add_product();
                break;
            case 3:
                transaction(code);
                break;
            case 4:
                cout << "Selamat tinggal"<<endl;
                return 0;
                break;
            default:
                cout << "Menu yang anda inputkan salah!"<<endl;
                break;
        }

        cout <<endl<<endl;
        cout << "Apakah ingin melanjutkan program? Tekan y untuk lanjut atau n untuk exit program....";
        repeat = getch();
        
    } while (repeat == "Y" || repeat == "y");
   

    return 0;
}

