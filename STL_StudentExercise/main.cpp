#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

class Item
{
public:
    string name;
    int price;
    int qty;
    Item(){}
    Item(string n,int p,int q)
    {
        name=n;
        price=p;
        qty=q;
    }
    friend ifstream & operator >>(ifstream &ifs,Item &i);
    friend ofstream & operator <<(ofstream &ofs,Item &i);
    friend ostream & operator<<(ostream &x,Item &i);
};
ifstream & operator >>(ifstream &ifs,Item &i)
{
    ifs>>i.name;
    ifs>>i.price;
    ifs>>i.qty;
    return ifs;
}
ofstream & operator <<(ofstream &ofs,Item &i)
{
    ofs<<i.name<<endl;
    ofs<<i.price<<endl;
    ofs<<i.qty<<endl;
    return ofs;
}
ostream & operator<<(ostream &x,Item &i)
{
    x<<"Name: "<<i.name<<endl;
    x<<"Price: "<<i.price<<endl;
    x<<"Quantity: "<<i.qty<<endl;
    return x;
}
int main()
{
    int n,price,qty;
    string name;
    vector<Item*> list1;
    cout << "Enter the number of items: " << endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of the item: ";
        cin>>name;
        cout<<"Enter the price of the item: ";
        cin>>price;
        cout<<"Enter the number of items: ";
        cin>>qty;
        list1.push_back(new Item(name,price,qty));
    }

        ofstream x("Items.txt");
    for(int i=0;i<n;i++)
    {
        x<<*list1.at(i);
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
