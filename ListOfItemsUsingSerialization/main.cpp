#include <iostream>
#include<fstream>

using namespace std;

class Item
{
private:
    string name;
    int price;
    int no;
public:
    Item(){}
    Item(string n1,int p,int n)
    {
        name=n1;
        price=p;
        no=n;
    }
    friend ofstream & operator<<(ofstream &ofs,Item x);
    friend ifstream & operator>>(ifstream &ifs,Item &x);
    friend ostream & operator<<(ostream &os,Item &x);
};
ofstream & operator<<(ofstream &ofs,Item x)
{
    ofs<<x.name<<endl;
    ofs<<x.price<<endl;
    ofs<<x.no<<endl;
    return ofs;
}
ifstream & operator>>(ifstream &ifs,Item &x)
{
    ifs>>x.name;
    ifs>>x.price;
    ifs>>x.no;
    return ifs;
}
ostream & operator<<(ostream &os,Item &x)
{
    os<<"Name of Item: "<<x.name<<endl;
    os<<"Price of the item: "<<x.price<<endl;
    os<<"Number of item: "<<x.no<<endl;
    return os;
}
int main()
{
    int n,price,no;
    string name;
    cout<<"Enter the Number of items: "<<endl;
    cin>>n;
    cout<<"Enter all the Details of each item: "<<endl;
    Item *list1[n];
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter the name of the item: ";
        cin>>name;
        cout<<"Enter the price of the item: ";
        cin>>price;
        cout<<"Enter the number of items: ";
        cin>>no;
        list1[i-1]=new Item(name,price,no);
    }
    ofstream x("Items.txt");
    for(int i=0;i<n;i++)
    {
        x<<*list1[i];
    }
    x.close();

    Item z;
    ifstream y("Items.txt");
    for(int i=0;i<n;i++)
    {
        y>>z;
        cout<<z<<endl;
    }
    y.close();
    return 0;
}
