// WhiteBeltWeekTwo_Sets_UniqueStringCount.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
using namespace std;

void PrintSet(set<string> s) {
    for (const auto& elem : s) {
        cout << elem << " " << endl;
    }
}

void UniqueStringCounter(set<string> s) {
    int counter = 0;
    for (const auto& elem : s) {
        if () {

            counter++;
        }
    }
    cout << counter << endl;
}

int main()
{
    int quantity = 0;
    set<string> stringSet;
    string elem = "";
    cout << "enter string's quantity: " << endl;
    cin >> quantity;
    while (quantity != 0) {
        cin >> elem;
        stringSet.insert(elem);
        --quantity;
    }

    PrintSet(stringSet);
    UniqueStringCounter(stringSet);
}

