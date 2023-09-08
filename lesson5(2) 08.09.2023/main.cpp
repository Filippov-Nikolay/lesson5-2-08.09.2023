#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    Car a("Audi A5", "White", 2021, 24000);

    char* model = a.GetModel();
    cout << model << endl;

    a.Input();
    a.Print();

    a.SetModel("Mercedec");
    a.Print();

    return 0;
}

