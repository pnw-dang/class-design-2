#include "Item.h"

class Store
{
private:
	vector<Item> products;
public:
	Store() {}
	int indexOf(string);
	void addItem();
	void showInventory();
};