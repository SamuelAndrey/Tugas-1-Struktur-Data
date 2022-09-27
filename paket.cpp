// TUGAS PERTAMA - STACK (tumpukan) dari modifikasi file paket.cpp
// Samuel Andrey Aji Prasetya
// A11.2021.1376
// 43UG2

#include <iostream>
#include <conio.h>
#define MAX 5 // maksimal tumpukan

using namespace std;

struct paket {
    char jenis_brg[30];
    int berat;
    char kota[30];
};

struct paket kirim[100];

void push(int x) {
    cout << "\nData ke-"<< x;
    cout << "\nMasukkan Jenis Barang  : "; cin >> kirim[x].jenis_brg;
    cout << "Masukkan Berat Barang  : "; cin >> kirim[x].berat;
    cout << "Masukkan Kota Tujuan   : "; cin >> kirim[x].kota;
}

void display(int x) {
    // menampilkan data dari x sd 1
    int batas = x-1;
    cout << "\nDAFTAR KIRIMAN BARANG :\n";
    for(int i=batas; i>0; i--) {
        cout << i << ". " << kirim[i].jenis_brg << " ";
        cout << kirim[i].berat << " " << kirim[i].kota << "\n";
    }
}

void pop(int x) {
    cout << "Data yang terakhir terhapus adalah :\n";
    cout << x << ". " << kirim[x].jenis_brg << " ";
    cout << kirim[x].berat << " " << kirim[x].kota << "\n";
}

int main() {
    int pilih;
    int top = 1;
    do {
        system("cls");
        cout << "Menu : \n";
        cout << "1. Push data\n";
        cout << "2. Pop data\n";
        cout << "3. Display\n";
        cout << "9. Exit\n\n";
        cout << "Pilihan Anda [1-9] : "; cin >> pilih;

        if(pilih == 1) {
            if(top <= MAX) {
                push(top); // menambah data baru di posisi top
                top++; // index top bertambah 1
            } else {
                cout << "Stack is Full\n";
            }

            cout << "\nPress any key to continue....";
            getch();
            
        } else if(pilih == 2) {
            if(top > 1) {
                pop(top-1);
                top--;
            } else {
                cout << "Stack is Empty\n";
            }

            cout << "\nPress any key to continue....";
            getch();

        } else if(pilih == 3) {
            if(top > 1) {
                display(top);
            } else {
                cout << "Sorry Stack is Empty\n";
            }

            cout << "\nPress any key to continue....";
            getch();
        }
    } while(pilih != 9);

    return 0;
}
