/// basic open mode.
/*ios::in  input/read
ios::out  output/write ///but by doing in this both mode all the previous content will be erased and you data will be newly write.
ios::app   append
ios::ate    update
ios::binary  binary
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream fout;
  //here the ios::out is the default argument
  //fout.open("myfile.txt",ios::out);
  fout.open("myfile.txt",ios::app);
  fout<<"hello1";
  fout.close();
return 0;
}
