#include <iostream>
using namespace std;
class LinearLine {
private:
    float x1, y1, x2, y2;

public:
    LinearLine(float x1, float y1, float x2, float y2) : x1(x1), y1(y1), x2(x2), y2(y2) {}

    float gradient() {
        return (y2 - y1) / (x2 - x1);
    }

    float y_intercept() {
        return y1 - gradient() * x1;
    }

    void operator+(float a) {
        x1 += a;
        x2 += a;
    }

    void printEquation() {
        cout << "y = " << gradient() << "x + " << y_intercept() << endl;
    }

    
    float getX1() const { return x1; }
    float getY1() const { return y1; }
    float getX2() const { return x2; }
    float getY2() const { return y2; }

    
    void setX1(float value) { x1 = value; }
    void setY1(float value) { y1 = value; }
    void setX2(float value) { x2 = value; }
    void setY2(float value) { y2 = value; }
};

int main() {
    float x1, y1, x2, y2;

    
    cout << "Masukkan nilai x1: ";
    cin >> x1;

    cout << "Masukkan nilai y1: ";
    cin >> y1;

    cout << "Masukkan nilai x2: ";
    cin >> x2;

    cout << "Masukkan nilai y2: ";
    cin >> y2;

    LinearLine line(x1, y1, x2, y2);

    
    cout << "(x1, y1) = (" << line.getX1() << ", " << line.getY1() << ")" << endl;
    cout << "(x2, y2) = (" << line.getX2() << ", " << line.getY2() << ")" << endl;

    cout << "gradient = " << line.gradient() << endl;
    cout << "y_intercept = " << line.y_intercept() << endl;

    
    line.printEquation();

    int a ;
    cout << "Digeser sejauh (pada arah sumbu x) : "; 
    cin >> a; 
    line + a;

    
    cout << "Setelah digeser sejauh " << a << ", didapatkan persamaan baru:" << endl;
    line.printEquation();

    return 0;
}