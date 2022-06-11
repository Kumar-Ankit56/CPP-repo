#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fin;
    char ch;
    fin.open("ankit.txt");
    fin>>ch;
    cout<<ch;

    ch=fin.get();
   //here i  have set the functionalty of while as if it will not reach to the end of the file then it will return the 0 but by zero it will terminate that we don't want so we have set this not function.
    while(!fin.eof())
    {
        cout<<ch;
        ch=fin.get();
    }
    fin.close();


    char st;
    //string st;
    //opening the text file into in
    fin.open("sample60.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
     while(!fin.eof()){
        st=fin.get();
        cout<<st;
    }
    return 0;
}
