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
}
