#include <iostream>
#include <string>
using namespace std;

class Product
{
    public:
    int markedPrice()
    {
        return 1000;
    }

    int discount()
    {
        return 40;
    }
};

class Dress: public Product
{
    public:
    char size(int chestSize)
    {
        if (chestSize >= 20 && chestSize <= 30)
            return 'S';
        else if(chestSize >= 31 && chestSize <= 40)
            return 'M';
        else if(chestSize >= 40)
            return 'L';
    }

};

class Shirt: public Dress
{
    public:

    int price(int chestSize)
    {
        if (size(chestSize) == 'L')
            return (markedPrice() + 1000) - (markedPrice() * discount())/100;
        if(size(chestSize) == 'M')
            return (markedPrice() + 500) - (markedPrice() * discount())/100;
        if(size(chestSize) == 'S')
             return (markedPrice()) - (markedPrice() * discount())/100;

    }


};

int main()
{

    Shirt object;
    int size;
    cout << "Enter the chest size: ";
    cin >> size;

    cout << "Chest size: " << object.size(size) << endl;
    cout << "Price (in $) :" << object.price(size) << endl;

    return 0;
}
