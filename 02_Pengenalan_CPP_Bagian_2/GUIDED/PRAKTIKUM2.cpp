#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 5
using namespace std;
int maks3(int a, int b, int c); // mendeklarasikan prototype fungsi

int main(){
    //POINTER
    /*int x,y; //x dan y yang bertipe integer
    int  *px; //pxmerupakan variabel pointer yang menunjuk ke variabel int
    x = 87;
    px = &x;
    y = *px;
    cout <<"alamat dari x = "<<&x<<endl;
    cout <<"Nilai dari px = "<<px<<endl;
    cout <<"nilai dari x = "<<x<<endl;
    cout <<"nilai yang ditunujuk px = "<<*px<<endl;
    cout <<"nilai dari y = "<<y<<endl;
    getch();*/

    //ARRAY 2 Dimensi
    /*int i, j;
    float nilai_total, rata_rata;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };

    // inisialisasi array dua dimensi 
    for (i = 0; i < MAX; i++) {
        cout << "masukkan nilai ke-" << i + 1 << endl;
        cin >> nilai[i];
    }
    cout << "\ndata nilai siswa : \n";

    // menampilkan array satu dimensi 
    for (i = 0; i < MAX; i++) {
        cout << "nilai ke-" << i + 1 << "=" << nilai[i] << endl;}
    cout << "\n nilai tahunan:\n";
    
        // menampilkan array dua dimensi 
    for (i=0; i<MAX; i++){
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j]<<" ";
        }
         cout << "\n";
    }
    getch();
    */

    
    system("cls");
    int x, y, z;
    cout << "masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "masukkan nilai bilangan ke-3 = ";
    cin >> z;
    cout << "nilai maksimumnya adalah = " << maks3(x, y, z);
    getch();
    return 0;
}
//badan fungsi
int maks3(int a, int b, int c) {
    // deklarasi variabel lokal dalam fungsi
    int temp_max = a;
    if (b > temp_max)
        temp_max = b;
    if (c > temp_max)
        temp_max = c;
    return (temp_max);
}