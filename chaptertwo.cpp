// programming exercises for chapter 2
// Review of Chapter 2
// Well for the most part this chapter was about
// the structure of a small c++ program. In this case, basically
// how to define vars, functions, the main () function and much more
// But, the key take aways are these
// in order to define a variable, you must first type the data type out
// and then the variable name.
// Secondly, you can also do the same for functions defining what are called
// function prototypes at the top, return type function name
// this tells the compiler what sort of return type to expect from this function
// Also, it is important to begin to get familiar with the idea of namespace, and outside
// C libraries and how that plays a role within the compilation of a program
#include <iostream>
double furlongToYd (double furlong);
int yrsToMonths (int years, int months);
void displayTime (int hour, int minutes);

int main ()
{
    using namespace std;
    displayTime(9, 21);
    return 0;
}

double furlongToYd (double furlong)
{
    return furlong * 220;
}

int yrsToMonths (int years, int months)
{
    return (years * 12) + months;
}

void displayTime (int hour, int minutes)
{
    using namespace std;
    cout << hour << ":" << minutes << endl;
}
