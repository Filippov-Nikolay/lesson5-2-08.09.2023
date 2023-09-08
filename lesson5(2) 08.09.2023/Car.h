#pragma once // Файл дизайна

class Car {
	// Реализация класса - закрытая часть
	char* model;
	char* color;
	int year;
	double price;

public: // Интерфейс класса - открытая часть
	// Конструкторы/деструктор
	Car();
	Car(const char* m, const char* c, int y, double pr);
	~Car();

	void Input();
	void Print();

	// Инпекторы (геттеры)
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();

	// Модификаторы (сеттеры)
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetYear(int y);
	void SetPrice(double pr);
};

