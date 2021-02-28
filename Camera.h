#pragma once
#include <string>
using namespace std;

class Camera {
public:
	Camera(string name, string type, string author, int month, int day, int year, 
		double size, double width, double height, string aperture, double exposure, 
		int iso, bool flash);

	string getName();
	string getType();
	string getAuthor();
	int getMonth();
	int getDay();
	int getYear();
	double getSize();
	double getWidth();
	double getHeight();
	string getAperture();
	double getExposure();
	int getISO();
	bool getFlash();

	void setName(string newName);
	void setType(string newType);
	void setAuthor(string newAuthor);
	void setDate(int m, int d, int y);
	void setSize(double newSize);
	void setDimensions(double w, double d);
	void setAperture(string apert);
	void setExposure(double newExpos);
	void setISO(int newISO);
	void setFlash(bool newFlash);

private:
	string _name;
	string _type;
	string _author;
	int _month;
	int _day;
	int _year;
	double _size;
	double _width;
	double _height;
	string _aperture;
	double _exposure;
	int _iso;
	bool _flash;
};

void printMetaData(Camera param);