# Menu Dimsum
## Studi Kasus
Disini saya ingin membuat sebuah program untuk kasir handak dimsum.

## Deskripsi Program
1. Pertama ada deklarasi variabel
```cpp
string nama, varian;
    char pilihan;
    int harga, porsi, total;
    
    cout << "Welcome to Handak Dimsum!" << endl;
    cout << "Silahkan pilih :" << endl;
    cout << "1. Tampilkan menu :" << endl;
    cout << "2. Struk :" << endl;

    cout << "\n\nMasukkan pilihan:";
    cin >> pilihan;
```
2. Daftar Menu untuk menampilkan menu
```cpp
switch (pilihan)
    {
    case '1':
        cout << "====Harga Varian Dimsum====\n";
        cout << "1. Dimsum Original: Rp 12.000\n";
        cout << "2. Dimsum Cabe: Rp 12.000\n";
        cout << "2. Dimsum Toping Sosis: 15.000\n";
        cout << "3. Dimsum Toping Keju: Rp 15.000\n";
        cout << "4. Dimsum Toping Chili Oil: Rp 15.000\n";
        cout << "5. Dimsum Toping Mix: Rp 15.000\n";
        cout << "=================================\n";
        cout << "Masukkan Nama Pembeli: ";
        getline(cin, nama);
        cout << "Masukkan varian Dimsum: ";
        getline(cin, varian);
        cout << "Masukkan Porsi Dimsum: ";
        cin >> porsi;
        cout << "Masukkan Harga Dimsum: ";
        cin >> harga;
        total = harga * porsi;
        cout << "=================================\n";
        cout << "\n";
        break;
```
3. Menu kedua untuk menampilkan Struk Pembelian
```cpp
case '2':
        cout << "=== Struk Pembelian Handak Dimsum ===\n";
        cout << "Nama pembeli: " << nama << endl;
        cout << "Varian Dimsum: " << varian << endl;
        cout << "Porsi Dimsum: " << porsi << endl;  
        cout << "Harga Dimsum: Rp " << harga << endl;
        cout << "==================================\n";
        cout << "Total Harga: Rp " << total << endl;
        cout << "==================================\n";
        cout << "Terima kasih Telah Memilih Handak Dimsum.\n";
        cout << "HANDAK DIMSUM SEKALI COBA HANDAK LAGI!!!\n";
        break;
```
4. Sanitasi jika user menginputkan diluar yang diinginkan
```cpp
   default:    
        cout << "Antum mines literasi??\n";
        break;
    }
```