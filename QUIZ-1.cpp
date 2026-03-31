#include <iostream>
using namespace std;

class Tabungan {
public:
    string nama;
    int saldo;

    void inputData() {
        cout << "Nama Siswa : ";
        cin >> nama;
        saldo = 0;
    }

    // TODO 1: Buat method tampil()
    // tampilkan nama dan saldo

    // TODO 2: Buat method setor(int jumlah)
    // tambah saldo

    // TODO 3: Buat method tarik(int jumlah)
    // saldo tidak boleh kurang dari 0
};

int main() {
    Tabungan t;
    int pilih, jumlah;

    t.inputData();

    do {
        cout << "\n=== MENU TABUNGAN ===" << endl;
        cout << "1. Lihat Tabungan" << endl;
        cout << "2. Setor" << endl;
        cout << "3. Tarik" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilih;

        // TODO 4: Lengkapi switch-case menu

    } while (pilih != 4);

    return 0;
}