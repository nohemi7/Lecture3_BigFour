#include <iostream>
#include <cmath>
using namespace std;

/* Contructor:
    -called right AFTER new instances (objects) are createdd in memory
    -syntax:
        must have the same name as the class
        no return type

    Copy Constructor:
    -creates a new object and initializes it using an existing object
    -called also when passed through a function because it is copying the argument
    ex: here we see copy constructor is called %%
        Quadratic p1(1, 2, 3); 
        %% Quadratic p2(p1);

    Copy Assignment:
    -default behavior: copies the member variables of one object into another
    ex: copy assignment called here $$
    Quadratic p1(1, 2, 3);
    Quadratic p2;
    $$ p2 = p1;

    Destructor:
    -called right BEFORE an instance (object) is deleted from memory
    -syntax:
        must have the same name as the class preceded by a "~"
        no return type
    
     Initialization Lists:
     -used to initialize member variables (fields) at the time they are created
     -must be used to initialize const member vars (fields)
*/
class Complex {
public:
    Complex(double a = 0, double b = 0);
    void print() const;
    void conj();
    double magnitude() const;
    double getReal() const;
    double getImaginary() const;
private:
    double im;
    double re;
};

Complex::Complex(double a, double b) {
    cout << "Complex Constructor was called!\n";
    im = a;
    re = b;
}

double Complex::getReal() const { return re; }
double Complex::getImaginary() const { return im; }

void Complex::print() const {
    cout << im << "i + " << re << endl;
}

double Complex::magnitude() const {
    return sqrt(im*im + re*re);
}

void Complex::conj() {
    re = -re;
}

int foo(){
    Complex c;
    Complex* c2 = new Complex; //this object goes on the heap
    Complex c3(10, 5);
}

int main() {
    foo();
    return 0;
}