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

void print(Color);

int main() {
    cout << fixed << setprecision(2);
    //Object 1
    Color lavender;
    lavender.setName("Lavender");
    lavender.setRed(230);
    lavender.setGreen(203);
    lavender.setBlue(243);
    lavender.print();
    print(lavender);
    
    //Object 2
    Color sky;
    sky.setName("Sky");
    sky.setRed(171);
    sky.setGreen(225);
    sky.setBlue(255);
    sky.print();
    print(sky);
    
    //Object 3
    Color pink;
    pink.setName("Pink");
    pink.setRed(254);
    pink.setGreen(228);
    pink.setBlue(255);
    pink.print();
    print(pink);
    
    return 0;
}

void print(Color c) {
    cout << c.getName() << "RGB values: (" << c.getRed() << ", " << c.getGreen() << ", " << c.getBlue() << endl;
}
