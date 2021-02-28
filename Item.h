#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#pragma once

using namespace std;

class Item
{
private:
	string name;
	long id;
	double price;
	int quantity;
public:
	Item();
	Item(string, long, int, double);
	string getName();
	long getID();
	double getPrice();
	int getQuantity();
	double getTotal();
	void restock(int);
	void printItems();
};