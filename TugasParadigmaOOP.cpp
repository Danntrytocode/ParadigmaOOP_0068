#include <iostream>
#include <string>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void dataBarang(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};


int main(){
    Barang Elektronik;
    Elektronik.nama = "VGA GFORCE 3060";
    Elektronik.jumlah = 23;
    Elektronik.kategori = "Besar";
    Elektronik.tanggalProduksi = "12-01-2021";

    Barang nonElektronik;
    nonElektronik.nama = "Sempak Gusion";
    nonElektronik.jumlah = 50;
    nonElektronik.kategori = "Pakaian";
    nonElektronik.tanggalProduksi = "20-12-2024";
    Elektronik.dataBarang();
    nonElektronik.dataBarang();
}