#include <iostream>
#include <string>

using namespace std;

string hasilTesCoding(int nilaiCoding) {
    if (nilaiCoding > 80) {
        return "LOLOS";
    } else if (nilaiCoding >= 60) {
        return "DIPERTIMBANGKAN";
    } else {
        return "GAGAL";
    }
}

string hasilTesInterview(char nilaiInterview) {
    if (nilaiInterview == 'A' || nilaiInterview == 'B') {
        return "LOLOS";
    } else {
        return "GAGAL";
    }
}

int main() {
    int nilaiCoding;
    char nilaiInterview;

    cout << "Masukkan nilai coding: ";
    cin >> nilaiCoding;
    cout << "Masukkan nilai interview (A/B): ";
    cin >> nilaiInterview;

    string hasilCoding = hasilTesCoding(nilaiCoding);
    string hasilInterview = hasilTesInterview(nilaiInterview);

    if ((hasilCoding == "LOLOS" || hasilCoding == "DIPERTIMBANGKAN") && hasilInterview == "LOLOS") {
        cout << "Selamat Kamu Berhasil Menjadi Calon Programmer" << endl;
    } else {
        cout << "Maaf Kamu Belum Berhasil Menjadi Calon Programmer" << endl;
    }

    return 0;
}
