#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        int nim;
        string nama;
        float nilai;

        void printData(){
            cout << "NIM = " << nim << endl;
            cout << "Nama = " << nama << endl;
            cout << "Nilai = " << nilai << endl;
        }
};

int main(){
    Mahasiswa mhs1;

    mhs1.nim = 68;
    mhs1.nama = "Firmansyah";
    mhs1.nilai = 70.5;
    mhs1.printData();
}