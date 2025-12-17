#include <iostream>
using namespace std;

int main() {
    int yil;
    
    // Kullanicidan yil bilgisi alinir
    cout << "Bir yil giriniz: ";
    cin >> yil;

    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
        // Kosul saglaniyorsa artik yil
        cout << yil << " Artik Yildir";
    }
    else {
        // Kosul saglanmiyorsa artik yil degildir
        cout << yil << " Artik Yil Degildir";
    }

    return 0;
}