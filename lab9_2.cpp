#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream  source;
    ofstream dest("C:\\Users\\lab314-17\\Desktop\\New folder\\lab9-2562-2-TangJetsada123\\cheerbook_copy.txt");
    source.open("C:\\Users\\lab314-17\\Desktop\\New folder\\lab9-2562-2-TangJetsada123\\cheerbook.txt");
    string textline;
    bool    havetext;
    havetext = getline(source,textline);
    dest<< "-------------------- SOTUS ---------------------"<<"\n";
    while(havetext){
        dest<< textline<<"\n";
        havetext = getline(source,textline);
    }
        dest<< "-------------------- SOTUS ---------------------"<<"\n";
        source.close();
        dest.close();
    return 0;

}




//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
