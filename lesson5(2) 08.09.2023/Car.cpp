#include <iostream>
#include "Car.h"

using namespace std;

Car::Car() {
	this->model = nullptr;
	this->color = nullptr;

	year = 0;
	price = 0;
}
Car::Car(const char* m, const char* c, int y, double pr) {
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->year = y;
	this->price = pr;
}
Car::~Car() {
	delete[] this->model;
	delete[] this->color;
}

void Car::Input() {
	char buff[100];
	int ye;
	double pr;

	// MODEL
	cout << "Enter model car: ";
	cin >> buff;

	if (this->model != nullptr) {
		cout << "Delete model -> " << this->model << endl << endl;
		delete[] this->model;
	}

	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);


	// COLOR
	cout << "Enter color car: ";
	cin >> buff;

	if (this->color != nullptr) {
		cout << "Delete color -> " << this->color << endl << endl;
		delete[] this->color;
	}

	this->color = new char[strlen(buff) + 1];
	strcpy_s(this->color, strlen(buff) + 1, buff);


	// YEAR
	cout << "Enter year car: ";
	cin >> ye;
	this->year = ye;

	cout << "Enter price car: ";
	cin >> pr;
	this->price = pr;
}
void Car::Print() {
	cout << "Model car: " << this->model << endl;
	cout << "Color car: " << this->color << endl;
	cout << "Year car: " << this->year << endl;
	cout << "Price car: " << this->price << endl;
}

char* Car::GetModel() {
	return this->model;
}
char* Car::GetColor() {
	return this->color;
}
int Car::GetYear() {
	return this->year;
}
double Car::GetPrice() {
	return this->price;
}

void Car::SetModel(const char* m) {
	if (this->model) {
		cout << "Delete model -> " << this->model << endl << endl;
		delete[] this->model;
	}

	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}
void Car::SetColor(const char* c) {
	if (this->color) {
		cout << "Delete color -> " << this->color << endl << endl;
		delete[] this->color;
	}

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}
void Car::SetYear(int y) {
	this->year = y;
}
void Car::SetPrice(double pr) {
	this->price = pr;
}