#include <iostream>

using namespace std;

class Student {
    char name[50], birth[20], phone[20], city[30], country[30], school[50], sCity[30], sCountry[30], group[10];
public:
    void inputData() {
        cin.ignore();
        cin.getline(name, 50);
        cin.getline(birth, 20);
        cin.getline(phone, 20);
        cin.getline(city, 30);
        cin.getline(country, 30);
        cin.getline(school, 50);
        cin.getline(sCity, 30);
        cin.getline(sCountry, 30);
        cin.getline(group, 10);
    }

    void outputData() {
        cout << name << " | " << birth << " | " << phone << " | " << city << ", " << country
            << " | " << school << " (" << sCity << ", " << sCountry << ") | Group: " << group << endl;
    }

    void setName(const char* n) {
        int i = 0;
        while ((name[i] = n[i]) != '\0') i++;
    }

    const char* getName() { return name; }
};

class Point {
    double x, y, z;
public:
    Point(double px = 0, double py = 0, double pz = 0) : x(px), y(py), z(pz) {}

    void inputData() {
        cin >> x >> y >> z;
    }

    void outputData() {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
    }

    void setX(double val) { x = val; }
    double getX() { return x; }

    void setY(double val) { y = val; }
    double getY() { return y; }

    void setZ(double val) { z = val; }
    double getZ() { return z; }

    void saveToFile() {
        cout << x << " " << y << " " << z << endl;
    }

    void loadFromFile() {
        cin >> x >> y >> z;
    }
};

int main() {
    Student s;
    s.inputData();
    s.outputData();

    Point p;
    p.inputData();
    p.outputData();
    p.saveToFile();


}