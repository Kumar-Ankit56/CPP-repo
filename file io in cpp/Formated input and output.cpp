#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
///formate input and output means input and output data should be in a formatted such as alignment of data/value, set width of data, control of after decimal digit in float value etc.

///C++ supports a number of features theat could be used for formatting the output.  These features includes:
/*1. ios class functionand flag
2. manipulator
3. userdefined output fuction*/

///It has five function and flag
///width, precison, fill, setf(), unsetf()
int main()
{
    /*
       ///for setting width value
       cout<<456<<endl;
       cout.width(6);
       cout<<456;
    */
    ///for setting precision value
    cout<<sqrt(2)<<endl;
    cout.precision(2);
    cout<<fixed;
    cout<<sqrt(2)<<endl;


    ///for setting fill value
    cout.width(8);
    cout.fill('#');
    cout<<678<<endl;

    ///for setting setof function
    cout.width(8);
    cout.fill('#');
    cout.setf(ios::left,ios::adjustfield);
    cout<<954<<endl;
    cout << "setf(showpos): " << endl;
    cout.setf(ios::showpos);
    cout << 123 << endl;

    cout << "unsetf(showpos): " << endl;
    cout.unsetf(ios::showpos);
    cout << 123 << endl;
    return 0;
}
