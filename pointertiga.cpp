#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
 private:
 string nama;

 public:
 void setnama(string pnama);
 friend class siswa;
};

class siswa
{
    private:
    int id;

    public:
    void setid(int pid);
    void displayAll(orang &a);
};

void orang::setnama(string pnama)
{
    nama = pnama;
}

void siswa::setid(int pid)
{
    id = pid;
}

void siswa::displayAll(orang &a)
{
    cout << id << endl
         << a.nama;
}

int main()
{
    orang joko;
    joko.setnama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayAll(joko);
    return 0;
}