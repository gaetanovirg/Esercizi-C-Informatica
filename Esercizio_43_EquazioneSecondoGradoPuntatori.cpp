#include <iostream>
#include <cmath>
using namespace std;
float calcolaDelta(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    return delta;
}

bool calcolaSoluzione(float a, float b, float c, float *x1, float *x2) {
    float delta = calcolaDelta(a, b, c);
    if (delta < 0)
    {
        return false;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return true;
}

int main() {
    float a, b, c, x1, x2, delta;
    cout << "Inserisci A, B, C" << endl;
    cin >> a;
    cin >> b ;
    cin >> c;
    if (calcolaSoluzione(a, b, c, &x1, &x2)) {
        cout << "Le soluzioni sono x1 = " << x1 << " e x2 = " << x2 << endl;
    } else {
        cout << "Equazione impossibile" << endl;
    }
    return 0;
}
