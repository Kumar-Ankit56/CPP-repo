#include<iostream>
#include<fstream>
using namespace std;

int main(){
   string name;
   ofstream hout("Sample.txt");
   cout<<"Enter your name";
   cin>>name;
   hout<<"My name is " + name<<endl;
   hout.close();

   string content;
   ifstream hin;
   hin.open("sample.txt");
   content=hin.get();
   while(!hin.eof()){
        cout<<content;
       content=hin.get();
   }
   cout<<" The content of file is "<<content;

return 0;
}
