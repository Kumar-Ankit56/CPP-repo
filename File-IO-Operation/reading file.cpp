#include<iostream>
#include<fstream>
using namespace std;

int main(){
ifstream fin;
char ch;
fin.open("myfile.txt");
/*///It will not read any space value so for including the space content we will use something like this.
fin>>ch;
cout<<ch<<endl;
*/

//for reading with space in the file.
ch=fin.get();
//here i  have set the functionalty of while as if it will not reach to the end of the file then it will return the 0 but by zero it will terminate that we don't want so we have set this not function.
while(!fin.eof()){
    cout<<ch;
    ch=fin.get();
}
fin.close();
return 0;
}
///here closely observe that the fin>>ch is using extraction operator so here fin is calling the >> operator and pass the referance of the ch that doesn't read space and all speacial symblol
