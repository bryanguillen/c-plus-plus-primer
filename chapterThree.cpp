// The basic data types in c++ have to do with integers
// These include char, short, int, long, long long
// The types above are in order of width, which means
// The amount of memory each type takes up.
// These are some of the standards, a short is 16 bits long
// An int is at least as long as an short, a long is at least as
// big as an int, but probably 32 bit wide, and 64 for long long.
// As in ES6, you also have const type name = value; This is typically
// used as a symbol. As an example, look at const int Months = 12. So now,
// anywhere within a scope, you can use this symbol for your program

// Now we also have floating point numbers in C++ too. These include float, double
// and long double. Float is at least 32 bits and then double at least as big as
// a float or 48 bits.

// So for type conversions you have the following rules.
// You could set a variable like so, double randomNum;
// After that, you could then set the sum of two ints to that
// which will be set to double
// Also, when using to different num types, it usually converts to the largest number type
// So 9.0 / 5 would actually be 9.0 / 5.0
// On top of that, two shorts being added are also converted to type int because that is faster
// for the computer
#include <iostream>

void heightInFeet (void);
void BMI (void);

main ()
{
    using namespace std;
    BMI();
}

void heightInFeet (void)
{
    using namespace std;
    const int inchesPerFt = 12;
    int inches;
    cout << "Enter your height in inches: _ ";
    cin >> inches;
    cout
        << inches / inchesPerFt
        << " ft "
        << inches % inchesPerFt
        << " in"
        << endl;
}

void BMI (void)
{
    using namespace std;
    int ft, in;
    float lbs;
    const float metersConversion = 0.0254;
    const float kgsConversion = 2.2;
    cout << "Enter your height" << endl;
    cout << "Ft: (whole number in feet, eg. 6) _ ";
    cin >> ft;
    cout << "In: _ ";
    cin >> in;
    cout << "Weight in lbs: ";
    cin >> lbs;
    cout
        << "Your BMI is "
        << (lbs / kgsConversion) / ((ft * 12 + in) * metersConversion)
        <<  endl;
}
