#include <iostream>
#include "Camera.h">
using namespace std;

Camera::Camera(string name, string type, string author, int month, int day, int year, double size, double width, double height, string aperture,
	double exposure, int iso, bool flash) : _name{ name }, _type{ type }, _author{ author }, _month{ month }, _day{ day }, _year{ year }, _size{ size }, _width{ width },
	_height{ height }, _aperture{ aperture }, _exposure{ exposure }, _iso{ iso }, _flash{ flash } {}

string Camera::getName() {
	return _name;
}

void Camera::setName(string newName) {
	_name = newName;
}

string Camera::getType() {
	return _type;
}

void Camera::setType(string newType) {
	if (_type == "PNG" || _type == "GIF" || _type == "JPEG") {
		_type = newType;
	}
	else {
		cout << _type << " is not a supported image type!";
	}
}

string Camera::getAuthor() {
	return _author;
}

void Camera::setAuthor(string newAuthor) {
	_author = newAuthor;
}

int Camera::getMonth() {
	return _month;
}

int Camera::getDay() {
	return _day;
}

int Camera::getYear() {
	return _year;
}

void Camera::setDate(int newMonth, int newDay, int newYear) {
	if (newMonth > 0 && newDay < 32 && newMonth > 0 && newMonth < 13 && newYear > 0) {
		_month = newMonth;
		_day = newDay;
		_year = newYear;
	}
	else {
		cout << "This is an invalid date!";
	}
}

double Camera::getSize() {
	return _size;
}

void Camera::setSize(double newSize) {
	if (_size > 0) {
		_size = newSize;
	}
	else {
		cout << "File size cannot be negative!";
	}
}

double Camera::getWidth() {
	return _width;
}

double Camera::getHeight() {
	return _height;
}

void Camera::setDimensions(double newWidth, double newHeight) {
	if (_width >= 0 && _height >= 0) {
		_width = newWidth;
		_height = newHeight;
	}
	else {
		cout << "Dimensions cannot be negative!";
	}
	_width = newWidth;
	_height = newHeight;
}

string Camera::getAperture() {
	return _aperture;
}

void Camera::setAperture(string newApert) {
	if (newApert.size() > 2 && newApert.at(0) == 'f' && newApert.at(1) == '/') {
		_aperture = newApert;
	}
	else {
		cout << "Aperture size is invalid!";
	}
}

double Camera::getExposure() {
	return _exposure;
}

void Camera::setExposure(double newExposure) {
	if (newExposure >= 0) {
		_exposure = newExposure;
	}
	else {
		cout << "Exposure time cannot be negative!";
	}
}

int Camera::getISO() {
	return _iso;
}

void Camera::setISO(int newISO) {
	_iso = newISO;
}

bool Camera::getFlash() {
	return _flash;
}

void Camera::setFlash(bool enabled) {}

void printMetaData(Camera param) {
	cout << "\n\nFile name: " << param.getName() << "\nType: " << param.getType() << "\nAuthor: " << param.getAuthor() <<
		"\nDate: " << param.getMonth() << "-" << param.getDay() << "-" << param.getYear() << "\nSize: " << param.getSize() << "\nDimensions: " 
		<< param.getWidth() << "x" << param.getHeight() << "\nAperture: " << param.getAperture() << "\nISO: " << param.getISO() << "\nFlash: " << param.getFlash() << "\n\n";
}



