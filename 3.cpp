#include <iostream>

using namespace std;

int main() {
    int nomorPunggung;

    cout << "Masukkan nomor punggung pemain: ";
    cin >> nomorPunggung;

    if (nomorPunggung % 2 == 0) {
        if (nomorPunggung > 50 && nomorPunggung <= 100) {
            cout << "Nomor punggung " << nomorPunggung << " untuk pemain yang berhak dipilih menjadi captain team" << endl;
        } else {
            cout << "Nomor punggung " << nomorPunggung << " untuk posisi target attacker" << endl;
        }
    } else {
        if (nomorPunggung % 3 == 0 && nomorPunggung % 5 == 0) {
            cout << "Nomor punggung " << nomorPunggung << " untuk posisi keeper" << endl;
        } else if (nomorPunggung % 2 != 0 && nomorPunggung > 90) {
            cout << "Nomor punggung " << nomorPunggung << " untuk posisi playmaker" << endl;
        } else {
            cout << "Nomor punggung " << nomorPunggung << " untuk posisi defender" << endl;
        }
    }

    return 0;
}
