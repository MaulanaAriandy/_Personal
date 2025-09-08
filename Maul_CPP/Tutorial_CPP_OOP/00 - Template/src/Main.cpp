#include<iostream>
#include<string>

using namespace std;

// class tanpa constructor
class Polos {
    public:
        string dataString;
        int dataInteger;
};

// class dengan constructor = dimana suatu method atau fungsi yang dipanggil pertama kali saat object dibuat
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;

        // ini adalah constructor
        // Mahasiswa() {
        //     cout << "ini adalah constructor" << endl;
        // }

        // constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK) {
            Mahasiswa::nama = inputNama; // Mahasiswa:: disebut namespace sesuai dengan nama class : mengambil variabel nama didalam class Mahasiswa
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;

            cout << "nama mahasiswa    : " << Mahasiswa::nama << endl;
            cout << "NIM mahasiswa     : " << Mahasiswa::NIM << endl;
            cout << "jurusan mahasiswa : " << Mahasiswa::jurusan << endl;
            cout << "IPK mahasiswa     : " << Mahasiswa::IPK << "\n" << endl;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup", "13305041", "teknik pertanian", 4.0);
    Mahasiswa mahasiswa2 = Mahasiswa("asep", "13230341", "teknik menjait", 3.0);
    // Polos objectPolos;
    // objectPolos.dataString = "polos";
    // objectPolos.dataInteger = 0;

    // cout << objectPolos.dataString << endl;
    // cout << objectPolos.dataInteger << endl;

    return 0;
}
