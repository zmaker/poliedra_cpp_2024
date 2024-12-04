#include <iostream>
#include <typeinfo>

using namespace std;

template <class T>
class Punto{
public:
  T x;
  T y;
  Punto();
  Punto(T, T);
  void print();
  T area();
};

template <class T>
Punto<T>::Punto(){
  x = 0;
  y = 0;
}

template <class T>
Punto<T>::Punto(T a , T b){
  x = a;
  y = b;
}

template <class T>
void Punto<T>::print(){
  cout << "(" << x << ", " << y << ") " << endl;
}

template <class T>
T Punto<T>::area(){
  return x*y;
}

//template <class T1, class T2>
template <class T>
T maggiore(T a, T b) {
  T res;
  if (a > b){
    res = a;
  } else {
    res = b;
  }
  return res;
}

template <typename t>
void test(t param) {
  cout << "id tipo:" << typeid(t).name() << endl;
}

int main()
{
    cout << "Template" << endl;

    int n = 10;
    int m = 20;
    int ans = 0;

    ans = maggiore<int>(n,m);
    cout << "ans=" << ans << endl;

    double p = 12.34;
    double q = 56.67;
    double r = 0;

    r = maggiore<double>(p,q);
    cout << "ans=" << r << endl;

    test<int>(n);
    test<double>(p);

    return 0;
}
