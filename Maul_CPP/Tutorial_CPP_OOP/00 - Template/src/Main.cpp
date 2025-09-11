#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    public:
        string nama; // data
        double IPK;

        // ini constructor
        Mahasiswa(string nama, double IPK){
            Mahasiswa::nama = nama;
            Mahasiswa::IPK = IPK;
        }
        
        // fungsi
        // method tanpa parameter dan tanpa return 
        void tampilkanData(){
            cout << "Nama saya " << nama << ", IPK saya adalah " << IPK << endl;
            // cout << IPK << endl;
        }

        // method dengan parameter dan tanpa return
        void ubahNama(const char* namaBaru){ // bisa pakai string namaBaru tetapi, lebih cepat char*
            //menggunakan banyak memory
            Mahasiswa::nama = namaBaru;
        }

        // method tanpa parameter dan dengan return
        string getNama(){
            return Mahasiswa::nama;
        }

        double getIPK(){
            return IPK;
        }

        // method dengan parameter dan dengan return
        double katrolIPK(const double &tambahanNilai){
            // kenapa menggunakan const, karena untuk memastikan value tambahanNilai 
            // tidak berubah sebagai reference (reference harus constant) 
            // berlaku juga untuk variable namaBaru yang diatas
            return Mahasiswa::IPK + tambahanNilai;
        }
};


int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa1 = Mahasiswa("ucup",2.5);
    Mahasiswa mahasiswa2 = Mahasiswa("asep",4.0);
    mahasiswa1.tampilkanData();
    mahasiswa2.tampilkanData();
    
    mahasiswa1.ubahNama("mario");
    mahasiswa1.tampilkanData();

    string dataNama = mahasiswa1.getNama();
    cout << "dataNama = " << dataNama << endl;
    cout << "dataIPK = " << mahasiswa1.getIPK() << endl;
    cout << "nilai katrol = " << mahasiswa2.katrolIPK(-2.23) << endl;
    return 0;
}
