#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class Book
{
private:
    int bookid;
    char title[20];
    float price;
public:
    Book()
    {
        bookid=0;
        strcpy(title,"no title");
        price=0;
    }
    void getBookData()
    {
        cout<<"Enter bookid, title and price of the book";
        cin>>bookid;
        cin.ignore();
        cin.getline(title,19);
        cin>>price;
    }
    void showBookData()
    {
        cout<<"\n"<<bookid<<" "<<title<<" "<<price;
    }
    int storeBook();
    int viewAllBooks();
};
int Book::storeBook()
{
    if(bookid==0&&price==0)
    {
        cout<<"Book data is not intialised";
        return(0);
    }
    else
    {
        ofstream fout;
        fout.open("Bookdetails.txt",ios::app);
        ///It takes two argument as first the address where actually data is present so in our case our data present in the coller object
        fout.write((char*)this,sizeof(*this));
        fout.close();
        return(1);
    }
}
int Book::viewAllBooks()
{
    ifstream fin;
    fin.open("Bookdetails.txt",ios::in);
    if(!fin)
    {
        cout<<"File not found";
    }
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            showBookData();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}

int main()
{
    Book b1,b2;
    b1.getBookData();
    b1.showBookData();
    b1.storeBook();
    b2.showBookData();
    b2.storeBook();
    b1.viewAllBooks();
    return 0;
}
