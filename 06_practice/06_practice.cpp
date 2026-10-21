#include <iostream>
using namespace std;

#pragma region Time Classes

class Seconds {
private:
    int value;
public:
    explicit Seconds(int v) : value(v >= 0 ? v : 0) {}
    int getValue() const { return value; }
    void print() const { cout << value << " sec"; }
};


class Minutes {
private:
    int value;
public:
    explicit Minutes(int v) : value(v >= 0 ? v : 0) {}
    int getValue() const { return value; }
    void print() const { cout << value << " min"; }
};


class Hours {
private:
    int value;
public:
    explicit Hours(int v) : value(v >= 0 ? v : 0) {}
    int getValue() const { return value; }
    void print() const { cout << value << " hours"; }
};
#pragma endregion

class Time {
private:
    int hours;
    int minutes;
    int seconds;

    void normalize() {
        int total_seconds = hours * 3600 + minutes * 60 + seconds;
        if (total_seconds < 0) total_seconds = 0;

        hours = total_seconds / 3600;
        minutes = (total_seconds / 60) % 60;
        seconds = total_seconds % 60;
    }

    int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }

public:

    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    explicit Time(Seconds s) {
        int total = s.getValue();
        hours = total / 3600;
        minutes = (total % 3600) / 60;
        seconds = total % 60;
    }

    Time(Hours h, Minutes m, Seconds s) {
        hours = h.getValue();
        minutes = m.getValue();
        seconds = s.getValue();
        normalize();
    }

    void print() const {
        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }


    Time& operator++() {
        seconds++;
        normalize();
        return *this;
    }

    Time operator++(int) {
        Time temp = *this;
        seconds++;
        normalize();
        return temp;
    }

#pragma region Ariphmatic operayors


    Time operator+(const Time& other) const {
        return Time(Seconds(toSeconds() + other.toSeconds()));
    }

    Time operator-(const Time& other) const {
        int diff = toSeconds() - other.toSeconds();
        return Time(Seconds(diff > 0 ? diff : 0));
    }

    Time operator*(int scalar) const {
        return Time(Seconds(toSeconds() * scalar));
    }

    Time operator/(int scalar) const {
        if (scalar == 0) {
            cout << "Error, you cant divine by zero!" << endl;
            return *this;
        }
        return Time(Seconds(toSeconds() / scalar));
    }

#pragma region Bool operators


    bool operator>(const Time& other) const { return toSeconds() > other.toSeconds(); }
    bool operator<(const Time& other) const { return toSeconds() < other.toSeconds(); }
    bool operator>=(const Time& other) const { return toSeconds() >= other.toSeconds(); }
    bool operator<=(const Time& other) const { return toSeconds() <= other.toSeconds(); }
    bool operator==(const Time& other) const { return toSeconds() == other.toSeconds(); }
    bool operator!=(const Time& other) const { return toSeconds() != other.toSeconds(); }
};
#pragma endregion
int main() {
    Hours h(2);
    Minutes m(45);
    Seconds s(5555);

    Time t1;           
    Time t2(s);            
    Time t3(h, m, Seconds(30));

    cout << "t1 (default): ";
    t1.print();

    cout << "t2 (from Seconds class): ";
    t2.print();

    cout << "t3 (from Hours, Minutes, Seconds classes): ";
    t3.print();


    Time sum = t2 + t3;
    cout << "t2 + t3 = ";
    sum.print();


}