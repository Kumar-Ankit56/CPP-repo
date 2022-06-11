#include<iostream>
#include<fstream>

/*THe useful classes for working with file in C++ are:
    1. fstream
    2. ifstream
    3. ofstream

THer is two ways to open a file.
1. Uisng the constructor
2. using the member function open() of the class.*/


using namespace std;

int main(){

    string st2;
 /*  string st="Ankit kumar";
ofstream out("sample.txt"); //write operation
 out<<st;*/

 //Opening file using constructor and reading it.
 ifstream in("sample.txt");//reading operation
 //in>>st2;//this is will return only a word from file until the space.
 //getline(in, st2);
 st2=in.get();
 while(!in.eof()){
    cout<<st2;
    st2=in.get();
 }
return 0;
}
