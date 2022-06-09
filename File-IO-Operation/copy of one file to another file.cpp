#include<iostream>
#include<fstream>
using namespace std;
void copyfile(char*f1, char*f2);

int main()
{
    copyfile("ankit.txt","ankitcopy.txt");
    cout<<"file exchaging is completed";
    return 0;
}
void copyfile(char*f1,char*f2)
{
    ifstream fin;
    ofstream fout;
    char ch;
    fin.open(f1);
    fout.open(f2);
    //here fin.get will read one character from file and will store in the ch.
    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
