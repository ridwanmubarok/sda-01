#include <iostream>
#include <string>

using namespace std;

bool isDon(int umur, string tempatTinggal, double uangTabungan) {
    return (umur > 40 && (tempatTinggal == "Nevada" || tempatTinggal == "New York" || tempatTinggal == "Havana") && uangTabungan > 10000000);
}

bool isUnderboss(int umur, string tempatTinggal, double uangTabungan) {
    return (umur >= 25 && umur <= 40 && (tempatTinggal == "New Jersey" || tempatTinggal == "Manhattan" || tempatTinggal == "Nevada") && uangTabungan >= 1000000 && uangTabungan <= 2000000);
}

bool isCapo(int umur, string tempatTinggal, double uangTabungan) {
    return (umur >= 18 && umur <= 24 && (tempatTinggal == "California" || tempatTinggal == "Detroit" || tempatTinggal == "Boston") && uangTabungan < 1000000);
}

int main() {
    string nama, tempatTinggal, pangkat;
    int umur;
    double uangTabungan;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan umur: ";
    cin >> umur;
    cout << "Masukkan tempat tinggal: ";
    cin.ignore();
    getline(cin, tempatTinggal);
    cout << "Masukkan uang tabungan dalam dollar: ";
    cin >> uangTabungan;

    if (isDon(umur, tempatTinggal, uangTabungan)) {
        pangkat = "Don";
    } else if (isUnderboss(umur, tempatTinggal, uangTabungan)) {
        pangkat = "Underboss";
    } else if (isCapo(umur, tempatTinggal, uangTabungan)) {
        pangkat = "Capo";
    } else {
        cout << nama << " tidak mencurigakan." << endl;
        return 0;
    }
    cout << nama << " kemungkinan adalah seorang anggota mafia dengan pangkat " << pangkat << "." << endl;
    return 0;
}