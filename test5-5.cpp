#include <iostream>

using namespace std;

struct Point {
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

Point operator + (const Point &A, const Point &B) {
    return Point(A.x + B.x, B.x + B.y);
}

ostream& operator << (ostream &out, const Point &p) {
    out << "(" << p.x << "," << p.y << ")";
    return out;
}

int main() {
    Point a, b(1, 2);
    a.x = 3;
    cout << a + b << "\n";
    return 0;
}


template<typename T>
T sum(T *begin, T *end) {
    T *p = begin;
    T ans = 0;
    for (T *p = begin; p != end; p++)
        ans = ans + *p;
    return ans;
}



int main1() {
    double a[] = {1.1, 2.2, 3.3, 4.4};
    cout << sum(a, a + 4) << "\n";
    Point b[] = {Point(1, 2), Point(3, 4), Point(5, 6), Point(7, 8)};
    cout << sum(b, b + 4) << "\n";
    return 0;
}


