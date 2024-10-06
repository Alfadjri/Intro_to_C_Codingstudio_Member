#include<iostream>
using namespace std;

double mySqrt(double x) {
    double tingkat_akurasi = 0.000001; // Tingkat akurasi
    double tebakan = x/2;
    while (abs(tebakan * tebakan - x) > tingkat_akurasi) {
        tebakan = (tebakan + x / tebakan) / 2;
    }
    return tebakan;
}
double hitungRataRata(float data[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += data[i];
    }
    return total / n;
}

double hitungStandarDeviasi(float data[], int n, double rata_rata) {
    double pangkat = 0, variance = 0;
    for (int i = 0; i < n; i++) {
        pangkat += data[i] * data[i];
    }
    variance = (pangkat - n * rata_rata * rata_rata) / (n - 1);
    return mySqrt(variance);
}

int main(){
    int n = 5,k = 3;
    cout << "Masukan banyak data n : "; 
    cin >> n;
    cin.ignore();
    cout << "Masukan banyak data k : ";
    cin >> k;
    cin.ignore();
    float data[k][n];
    input value
    for(int i = 0 ; i < k ; i++){
        cout << "=Masukan data untuk variabel ke-" << i+1 << "=" << endl;
        for(int j = 0 ; j < n ; j++){
            cout << "Variable ke-" << i+1 << ", data ke-" << j+1 << ": " ;
            cin >> data[i][j];
            cin.ignore();
        }
    }

    
    // data[0][0] = 10;
    // data[0][1] = 13.5;
    // data[0][2] = 9;
    // data[0][3] = 8.2;
    // data[0][4] = 19;

    // data[1][0] = 12;
    // data[1][1] = 143;
    // data[1][2] = 14;
    // data[1][3] = 15.1;
    // data[1][4] = 16;

    // data[2][0] = 19;
    // data[2][1] = 10;
    // data[2][2] = 13;
    // data[2][3] = 9.1;
    // data[2][4] = 20;
    

    //  print nilai
    cout << "=Cetak " << k << " variable=" << endl;
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < k ; i++){
            float value_print = data[i][j];
            cout << value_print << "\t";
        }
        cout << endl;
    }
    
    cout << "=Nilai rata-rata" << endl;
    for(int i=0 ; i < k ; i++){
        double rata_rata = hitungRataRata(data[i], n);
        cout << "x" << i+1 << ":\t" << rata_rata << endl;
    }
    cout << "=Nilai starndar deviasi" << endl;
    for(int i=0 ; i < k ; i++){
        double rata_rata = hitungRataRata(data[i], n);
        double standar_deviasi = hitungStandarDeviasi(data[i], n, rata_rata);
        cout << "x" << (i + 1) << ":\t"  << standar_deviasi << endl;
    }

    


    return 0;
}