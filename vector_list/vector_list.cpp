#include <iostream>
#include <list>
#include <vector>
using namespace std;


class Point {
public:
    double x;
    double y;

    Point() : x(0), y(0) {}
    Point(double X, double Y) : x(X), y(Y) {}
};

int main()
{
    vector<Point> points;

    for (int i = 1; i <= 5; i++) {
        points.push_back(Point(i + 1, i));
    }

    cout << "Vector:" << endl;
    for (auto it = points.begin(); it != points.end(); it++) {
        cout << "x: " << it->x << ", y: " << it->y << endl;
    }


    list<Point> points2;
    for (int i = 1; i <= 5; i++) {
        points2.push_back(Point(i + 1, i));
    }

    cout << "List:" << endl;
    for (auto it = points2.begin(); it != points2.end(); it++) {
        cout << "x: " << it->x << ", y: " << it->y << endl;
    }
    return 0;
}
