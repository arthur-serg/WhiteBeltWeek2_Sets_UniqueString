#include <iostream>
#include <set>
using namespace std;

void PrintSet(set<string> s) {
    for (const auto& elem : s) {
        cout << elem << " " << endl;
    }
}

inline void UniqueStringCounter(set<string> s) {
    cout << s.size() << "unique strings"<< endl;
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

    //PrintSet(stringSet);
    UniqueStringCounter(stringSet);
    
}

