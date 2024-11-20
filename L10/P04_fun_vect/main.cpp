#include <iostream>
#include <vector>
#include <locale>

#include <algorithm>

using namespace std;

void prtv(vector<int> v) {
  for (int el : v) {
    cout << el << " ";
  }
  cout << endl;
}

int main()
{
    setlocale(LC_ALL, "");

    cout << "Vector" << endl;

    vector<int> numeri;
    vector<int> num(10);
    vector<int> voti = {6,7,8,5,9,4,6,7,5,6};

    prtv(voti);

    vector<int> ans(10, 42);

    prtv(ans);

    numeri.push_back(10);
    numeri.push_back(20);
    numeri.push_back(30);

    prtv(numeri);

    cout << "size: " << numeri.size() << endl;
    cout << "capacità: " << numeri.capacity() << endl;

    numeri[0] = 99;

    prtv(numeri);

    cout << "primo  el: " << numeri.front() << endl;
    cout << "ultimo el: " << numeri.back() << endl;

    numeri.insert(numeri.begin()+1, 15);
    prtv(numeri);

    numeri.insert(numeri.begin()+2, 3, 0); //indice, ripetizioni, valore
    numeri.insert(numeri.begin()+1, 15);
    prtv(numeri);

    /*
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
*/
    return 0;
}
