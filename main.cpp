#include "Jam.h"

int main(){
    tJam jam;

    //input Jam, Menit, Detik
    jam.setJam();
    jam.setMenit();
    jam.setDetik();

    //menampilkan jam yang diinput
    jam.cetakJam();


    //cout << "Jam sekarang " << Jam.HH << ":" << Jam.MM << ":" << Jam.SS << endl;
    //cout << "Hello world!" << endl;
    return 0;
}
