#include <iostream>
#include "URL.h"
#include "Camera.h"
#include "Item.h"
#include "Store.h"
using namespace std;

int main() {
    URL link1("https://github.com/teddy-ui");
    printURL(link1);

    Camera pic("Image01", "PNG", "Toni", 2, 19, 2021, 560, 35, 62, "f/22", 1.0 / 1000.0, 340, true);
    printMetaData(pic);

    Store storeInventory;
    int n;
    cout << "Number of products that will be added to the inventory: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        storeInventory.addItem();
        cout << endl;
    }

    storeInventory.showInventory();
}
