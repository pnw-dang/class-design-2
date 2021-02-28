#include "Store.h"

int Store::indexOf(string name)
{
    int index = -1;
    for (int i = 0; i < products.size(); i++)
    {
        if (products[i].getName().compare(name) == 0)
        {
            index = i;
            break;
        }
    }
    return index;
}
void Store::addItem()
{
    string item;
    int quantity;
    long id;
    double price;

    cout << "Enter the item name: ";
    cin >> item;

    int index = indexOf(item);
    if (index == -1)
    {
        cout << "Product ID: ";
        cin >> id;

        cout << "Quantity: ";
        cin >> quantity;

        cout << "Price: $";
        cin >> price;

        products.push_back(Item(item, id, quantity, price));
        cout << item << " has been added to the inventory.\n";
    }
    else
    {
        cout << "Quantity: ";
        cin >> quantity;
        products[index].restock(quantity);
        cout << quantity << " " << item << "s has been added to the existing pile (total: " << products[index].getQuantity() << ").\n";
    }
}
void Store::showInventory()
{
    double total = 0.0;
    int numOfItems = 0;
    cout << "\n\n****INVENTORY DETAILS****\n";
    for (Item product : products) {
        product.printItems();
        numOfItems++;
        total += product.getTotal();
    }
    cout << "Number of items: " << numOfItems << endl;
    cout << "Total value: $" << total;
}