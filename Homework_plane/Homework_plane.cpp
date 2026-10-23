#include <iostream>
using namespace std;



class Airplane
{
private:
    char model[50];
    char type[50];
    int count_pasegers;
    int max_count_pasegers;

    void copyString(char* dest, const char* src, int maxLen) {
        int i = 0;
        while (src[i] != '\0' && i < maxLen - 1) {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

public:
    Airplane() {
        copyString(model, "Unknown", 50);
        copyString(type, "Unknown", 50);
        count_pasegers = 0;
        max_count_pasegers = 100;
    }

    Airplane(const char* m, const char* t, int count, int maxCount)
        : max_count_pasegers(maxCount) {
        copyString(model, m, 50);
        copyString(type, t, 50);

        if (count < 0) {
            count_pasegers = 0;
        }
        else if (count > max_count_pasegers) {
            count_pasegers = max_count_pasegers;
        }
        else {
            count_pasegers = count;
        }
    }

    void display() const {
        cout << "--- Airplane Information ---\n"
            << "Model: " << model << "\n"
            << "Type: " << type << "\n"
            << "Passengers on board: " << count_pasegers << " / " << max_count_pasegers << "\n\n";
    }

    friend bool operator==(const Airplane& a1, const Airplane& a2);

    Airplane& operator++() {
        if (count_pasegers < max_count_pasegers) {
            ++count_pasegers;
        }
        else {
            cout << "[Warning] Maximum passenger capacity reached for airplane " << model << "!\n";
        }
        return *this;
    }

    Airplane& operator--() {
        if (count_pasegers > 0) {
            --count_pasegers;
        }
        else {
            cout << "[Warning] Airplane " << model << " cabin is already empty!\n";
        }
        return *this;
    }

    friend bool operator>(const Airplane& a1, const Airplane& a2);

    Airplane& operator()(int value) {
        int newCount = count_pasegers + value;
        if (newCount > max_count_pasegers) {
            count_pasegers = max_count_pasegers;
            cout << "[Warning] Maximum capacity exceeded! Set to maximum (" << max_count_pasegers << ").\n";
        }
        else if (newCount < 0) {
            count_pasegers = 0;
            cout << "[Warning] Passenger count cannot be negative! Set to 0.\n";
        }
        else {
            count_pasegers = newCount;
        }
        return *this;
    }
};

bool operator==(const Airplane& a1, const Airplane& a2) {
    int i = 0;
    while (a1.type[i] != '\0' && a2.type[i] != '\0') {
        if (a1.type[i] != a2.type[i]) {
            return false;
        }
        i++;
    }
    return a1.type[i] == a2.type[i];
}

bool operator>(const Airplane& a1, const Airplane& a2) {
    return a1.max_count_pasegers > a2.max_count_pasegers;
}

int main() {
    Airplane plane1("Boeing 737", "Commercial", 150, 180);
    Airplane plane2("Airbus A320", "Commercial", 175, 180);
    Airplane plane3("Cessna 172", "Private", 3, 4);

    plane1.display();
    plane2.display();
    plane3.display();

    if (plane1 == plane2) {
        cout << "1. Boeing 737 and Airbus A320 have the same type.\n\n";
    }

    if (plane1 > plane3) {
        cout << "3. Boeing 737 has a greater maximum capacity than Cessna 172.\n\n";
    }

    cout << "--- Testing prefix ++ and -- ---\n";
    ++plane3;
    plane3.display();

    ++plane3;

    --plane3;
    plane3.display();

    cout << "--- Testing operator (value) ---\n";
    cout << "Adding 25 passengers to Boeing 737:\n";
    plane1(25);
    plane1.display();

    cout << "Attempting to add another 20 passengers:\n";
    plane1(20);
    plane1.display();

}