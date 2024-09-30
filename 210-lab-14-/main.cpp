//COMSC 210 | Lab 14 | Em
#include <iostream>
#include <iomanip>
using namespace std;

const int W12 = 12;

class Color {
private:
    string name;
    int red;
    int green;
    int blue;
public:
    //getters and setters
    string getName()        { return name; }
    void setName(string n)  { name = n; }
    int getRed()            { return red; }
    void setRed(int r)      { red = r; }
    int getGreen()          { return green; }
    void setGreen(int g)    { green = g; }
    int getBlue()           { return blue; }
    void setBlue(int b)     { blue = b; }
    
    //print method
    void print() {
        cout << setw(W12) << "Red: " << red << endl;
        cout << setw(W12) << "Green: " << green << endl;
        cout << setw(W12) << "Blue: " << blue << endl;
    }
};
