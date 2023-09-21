#include <iostream>
#include <string>

using namespace std; //karena menggunakan string

const int MAX = 999; //mengatur batasan array

typedef struct  {       //sebagai definisi program
    string nama;           //menyimpan nama
    string nrp;             //menyimpan nrp
    int umur;                 //meyimpan umur
    bool jeniskelamin;          //menyimpan jeniskelamin
}   mahasiswa;          


int main()
{
    mahasiswa mhs[MAX];    // Deklarasi array mhs
    int x = 0;          // mementukan variable x
    int input;

    if (x < MAX) {      // untuk cek apakah x kurang dari MAX
    mhs[x].nama = "Subkhan Mas Udi";    // Mengisi data ke struct    
    mhs[x].nrp = "5027221044";
    mhs[x].umur = 20;
    mhs[x].jeniskelamin = 1;  
    x++;                        // Menambahkan nilai x
}

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Tampilkan data mahasiswa" << endl;
        cout << "2. Tambahkan data mahasiswa" << endl;
        cout << "3. Hapus data mahasiswa" << endl;
        cout << "4. Ubah data mahasiswa" << endl;
        cout << "5. Keluar dari program" << endl;
        cout << "Choose menu (1-5): " << endl;
        cin >> input;

        if (input == 1)
        {
            cout << "\nData Mahasiswa:" << endl <<endl;
            for (int i = 0; i < x; i++)
            {

                cout << "Mahasiswa " << i + 1 << ":" << endl;
                cout << "Name: " << mhs[i].nama << endl;
                cout << "ID: " << mhs[i].nrp << endl;
                cout << "Age: " << mhs[i].umur << endl;
                cout << "Gender: " << (mhs[i].jeniskelamin ? "Male" : "Female");
                cout << "" << endl;                                                   //untuk memberikan spasi agar tidak menyatu dengan menu
                cout << "" << endl;                                                  //untuk memberikan spasi agar tidak menyatu dengan menu
            }
        }
        else if (input == 2)
        {
            if (x < 10)
            {
                cout << "Input student data:" << endl;
                cout << "Name: ";
                cin >> mhs[x].nama;
                cout << "ID: ";
                cin >> mhs[x].nrp;
                cout << "Age: ";
                cin >> mhs[x].umur;
                cout << "Gender (0 = Cewek, 1 = Cowok): ";
                cin >> mhs[x].jeniskelamin;

                x++;
                cout << "Data berhasil ditambahkan." << endl << endl;
            }
            else
            {
                cout << "Data tidak berhasil di tambahkan" << endl << endl;
            }
        }
        else if (input == 4)
        {
            if (x > 0)
            {
                int edit;
                cout << "Masukkan data mahasiswa yang ingin di edits (0-" << x - 1 << "): ";
                cin >> edit;

                if (edit >= 0 && edit < x)
                {
                    cout << "Masukkan data baru:" << endl;
                    cout << "Nama: ";
                    cin >> mhs[edit].nama;
                    cout << "NRP: ";
                    cin >> mhs[edit].nrp;
                    cout << "Umur: ";
                    cin >> mhs[edit].umur;
                    cout << "Jenis Kelamin (0 = Cewek, 1 = Cowok): ";
                    cin >> mhs[edit].jeniskelamin;

                    cout << "Data berhasil diubah" << endl << endl;
                }
                else
                {
                    cout << "Data tidak berhasil diubah" << endl << endl;
                }
            }
            else
            {
                cout << "Terjadi kesalahan." << endl << endl;
            }
        }
        else if (input == 5)
        {
            cout << "\nKeluar dari program.." << endl << endl;
            break;
        }
        else
        {
            cout << "Gagal keluar dari program" << endl << endl;
        }
    }

    return 0;
}