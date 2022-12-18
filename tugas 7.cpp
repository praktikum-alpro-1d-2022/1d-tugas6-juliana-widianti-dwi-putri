#include<iostream>
using namespace std;

int pokok(int), lembur(int), makan(int), transport(int);

int main(){
    int nip, jam;
    string nama;
    cout << "=================================================" << endl;
    cout << " Program Menghitung Gaji" << endl;
    cout << "=================================================" << endl;
    cout << "Masukkan NIP : ";cin>>nip;
    cout << "Masukkan Nama : ";cin>>nama;
    cout << "Masukkan Jumlah Jam Kerja : ";cin>>jam;cout<<endl;
    cout << "=================================================" << endl;

    cout << "NIP : " << nip << endl;
    cout << "Nama : " << nama << endl;
    cout << "Gaji Pokok :Rp. " << pokok(jam) << endl;
    cout << "Lembur :Rp. " << lembur(jam) << endl;
    cout << "Uang Makan :Rp. " << makan(jam) << endl;
    cout << "Transport :Rp. " << transport(jam) << endl;
    return 0;
}

int pokok(int jam){
    if(jam>8){
        return 60000;
    }else{
        return 7500 * jam;
    }

}

int lembur(int jam){
    int a;
    if (jam>8){
        a = jam - 8;
        return a * (1.5 * 7500);
    } else {
        return 0;
    }
}

int makan(int jam){
    if (jam>=9){
        return 10000;
    } else {
        return 0;
    }
}

int transport(int jam){
    if (jam>=10){
        return 13000;
    } else {
        return 0;
    }
}
