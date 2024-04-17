#include <iostream>

using namespace std;

int main() {
    int waktuLari, waktuPushUp, waktuPlank;

    cout << "Masukkan waktu lari (dalam menit): ";
    cin >> waktuLari;
    cout << "Masukkan waktu push-up (dalam menit): ";
    cin >> waktuPushUp;
    cout << "Masukkan waktu plank (dalam menit): ";
    cin >> waktuPlank;

    int kaloriLari = (waktuLari / 5) * 60;
    int kaloriPushUp = (waktuPushUp / 30) * 200;
    int kaloriPlank = waktuPlank * 5;

    int totalKalori = kaloriLari + kaloriPushUp + kaloriPlank;

    cout << "Total kalori yang terbakar setelah melakukan aktivitas olahraga:";
    cout << " " << totalKalori << " kalori" << endl;

    return 0;
}
