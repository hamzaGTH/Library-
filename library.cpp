#include<iostream>
#include<string>
using namespace std;
class library
{
    private:
    int total;
    public:
    void LData(int x)
    {
        total = x;
    }
    void showData()
    {
        cout<<"Total books are: "<<total<<endl;
    }
    void add(int got)
    {
        if(total>0)
        {
            total+=got;
            cout<<"New books added are "<<got<<endl;
        }
        else
        {
            cout<<"No new books: "<<endl;
        }
    }
    void gone(int gave)
    {
        if(total>0)
        {
            total-=gave;
            cout<<"Books borrowed by students "<<gave<<endl;
        }
        else
        {
            cout<<"No books borrowed by students: "<<endl;
        }
    }

};
class books
{
    public:
    
    void bData(string book)
    {
        cout<<"Type of books borrowed "<< book <<endl;
    }
    

};
class u : public books, public library
{
    private:
    string name;
    public:
    void uData(string n)
    {
    name = n;
    }
    void suData()
    {
        cout<<"Book borrowed by: "<<name<<endl;
    }
};
int main()
{
    u b;
    //LIBRARY
    b.LData(100);
    b.showData();
    b.add(10);
    b.showData();
    b.gone(8);
    b.showData();
    //BOOK
    b.bData("4 Science");
    b.bData("4 Litrature");
    //user
    b.uData("Hamza Ali");
    b.suData();
    b.uData("Hassn");
    b.suData();
return 0 ;
}