#include <iostream>
#include <vector>
#include <locale>

#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    cout << "Vector" << endl;

    vector<int> numeri;
    vector<int> num(10);
    vector<int> voti = {6,7,8,5,9,4,6,7,5,6};

    for (int el : voti) {
      cout << el << " ";
    }
    cout << endl;

    vector<int> ans(10, 42);

    for (int el : ans) {
      cout << el << " ";
    }
    cout << endl;

    numeri.push_back(10);
    numeri.push_back(20);
    numeri.push_back(30);

    for (int el : numeri) {
      cout << el << " ";
    }
    cout << endl;

    cout << "size: " << numeri.size() << endl;
    cout << "capacità: " << numeri.capacity() << endl;

    numeri[0] = 99;

    for (int el : numeri) {
      cout << el << " ";
    }
    cout << endl;

    cout << "primo  el: " << numeri.front() << endl;
    cout << "ultimo el: " << numeri.back() << endl;

    numeri.insert(numeri.begin()+1, 15);
    for (int el : numeri) {
      cout << el << " ";
    }
    cout << endl;

    numeri.insert(numeri.begin()+2, 3, 0); //indice, ripetizioni, valore
    numeri.insert(numeri.begin()+1, 15);
    for (int el : numeri) {
      cout << el << " ";
    }
    cout << endl;

    numeri.insert(numeri.begin()+1, {100,101,102});
    for (int el : numeri) {
      cout << el << " ";
    }
    cout << endl;

    vector<int> x = {1000,1001,1002};
    vector<int> xy = {200,300};
    x.insert(x.begin()+1, xy.begin(), xy.end() );
    for (int el : x) {
      cout << el << " ";
    }
    cout << endl;

    x.pop_back();
    for (int el : x) cout << el << " ";
    cout << endl;

    x.erase(x.begin()+2);
    for (int el : x) cout << el << " ";
    cout << endl;

    x.clear();
    cout << "x size    : " << x.size() << endl;
    cout << "x capacità: " << x.capacity() << endl;

    cout << "-- sort di numeri -----" << endl;
    for (int el : numeri) cout << el << " ";
    cout << endl;
    sort(numeri.begin(), numeri.end());
    for (int el : numeri) cout << el << " ";
    cout << endl;

    cout << "-- reverse di numeri --" << endl;
    reverse(numeri.begin(), numeri.end());
    for (int el : numeri) cout << el << " ";
    cout << endl;

    return 0;
}
