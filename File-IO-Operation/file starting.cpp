#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream fout;
  fout.open("myfile.txt");
  fout<<"hello1";
  fout.close();
return 0;
}
