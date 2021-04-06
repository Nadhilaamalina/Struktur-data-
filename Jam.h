#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED

#include <iostream>
using namespace std;

struct tJam {
    int HH;
    int MM;
    int SS;

    void setJam() {
    cout << "Jam: ";
    cin >> HH;}

    void setMenit() {
    cout << "Menit: ";
    cin >> MM;}

    void setDetik() {
    cout << "Detik: ";
    cin >> SS;}

    int getJam() {
    return HH;}

    int getMenit() {
    return MM;}

    int getDetik() {
    return SS;}

    bool isValid(){
    if(HH < 0 or HH > 20) {
    return false;}

    if(MM < 0 or MM > 30) {
    return false;}

    if(SS < 0 or SS > 60) {
    return false;}
    return true;}

void cetakJam() {

    	if(isValid()) {
        	cout << "Jam sekarang " << getJam() << ":" << getMenit() << ":" << getDetik() << endl;
		} else {
			cout << "Jam Invalid" << endl;
		}
    }
};

/*    void setJam(int jam, int menit, int detik) {
        HH = jam;
        MM = menit;
        SS = detik;*/

#endif // JAM_H_INCLUDED
