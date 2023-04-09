#include <iostream>
#include <string>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

//check if height, width, and base are valid inputs
bool isValid(string userInput) {
    if (!isdigit(userInput[0]) || userInput == "0") {
        return false;
    }
    
    return true;
}

int main() {
    string shape;
    string userInput;
    int height;
    int width;
    int base;

    cout << "Enter a shape (rectangle or triangle): ";
    cin >> shape;
    cout << endl;

    cout << "Enter height: ";
    cin >> userInput;
    cout << endl;

    while (!isValid(userInput)) {
        cout << "Enter height: ";
        cin >> userInput;
        cout << endl;
    }

    height = stoi(userInput); //convert height from string to int

    if (shape == "rectangle") {
        cout << "Enter width: ";
        cin >> userInput;
        cout << endl;

        while (!isValid(userInput)) {
            cout << "Enter width: ";
            cin >> userInput;
            cout << endl;
        }

        width = stoi(userInput); //convert width from string to int
        
        Rectangle rect;
        rect.set_height(height);
        rect.set_width(width);

        cout << "Rectangle area: " << rect.area() << endl;
    }

    if (shape == "triangle") {
        cout << "Enter base: ";
        cin >> userInput;
        cout << endl;

        while (!isValid(userInput)) {
            cout << "Enter base: ";
            cin >> userInput;
            cout << endl;
        }

        base = stoi(userInput); //convert base from string to int

        Triangle tri;
        tri.set_height(height);
        tri.set_base(base);

        cout << "Triangle area: " << tri.area() << endl;
    }

    return 0;
}