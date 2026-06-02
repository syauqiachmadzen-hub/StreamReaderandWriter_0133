#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //deklarasi variable baris untuk menyimpan data string
    string baris;

    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjukan ke sebuah nama file
    outfile.open("contohfile.txt");

    cout <<  "> Menulis file , \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis file 
    while (true)
}