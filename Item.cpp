#include "Item.h"

Item::Item()
{
	this->name = "";
	this->quantity = 0;
	this->price = 0.0;
}
Item::Item(string name, long id, int quantity, double price)
{
	this->name = name;
	this->id = id;
	this->quantity = quantity;
	this->price = price;
}
string Item::getName() { 
	return name; 
}
int Item::getQuantity() { 
	return quantity; 
}
double Item::getPrice() { 
	return price; 
}
double Item::getTotal() { 
	return(getPrice() * getQuantity()); 
}
void Item::restock(int num) {
	this->quantity += num; 
}
void Item::printItems()
{
	cout << "Product: " << name << "\nID: " << id << "\nUnit price: $" << price 
		<< "\nQuantity: " << quantity << "\nTotal: $" << getTotal() << "\n\n";
}