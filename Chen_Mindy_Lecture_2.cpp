//Mindy Chen
//Lecture 2
//9.16.24

#include <iostream>
#include <string>
using namespace std;

int main() {

    int two = 2;
    float dec = 3.5;
    double decs = 3.9;
    char care = 'g';
    bool ft = true;
    string li = "Yes";

    //I gave an identifier to each datatype and gave each identifier a value

    cout << "int= " << two << "\n";  

    cout << "float= " << dec << "\n";  

    cout << "double= " << decs << "\n";  

    cout << "char= " << care << "\n";  

    cout << "bool= " << ft << "\n";  

    cout << "string= " << li << "\n"; 

     //Using cout, I outputed each value of the variables

    int feet = 30;

    //I gave the identifier feet the value 30 

    cout << feet << " feet = ";

    cout << feet / 3 << " yards and ";

    cout << feet % 3 << " feet " << endl;

    //i divided the value 30 by 3 and named its value and its remainder yards and feet

    char a1 = 'A';
     char b1 = 'B';

    cout << "A < B = " << (a1 > b1) << "\n"; 

    //I gave char a1 and b1 the values A and B which is 65 and 66 in ASCII value. I then outputted A<B using cout 

    cout << "2 + 3.5 = " << 2 + 3.5 << "\n";

    cout << "6 / 4 + 3.9 = " << 6 / 4 + 3.9 << "\n";

    cout << "5.4 * 2 - (13.6 + 18 / 2) = " << 5.4 * 2 - (13.6 + 18 / 2) << endl;

    //Using cout, iI solved the given expressions by outing the expression + = and then the answer of the expression

    return 0;
}

/* int= 2
float= 3.5
double= 3.9
char= g
bool= 1
string= Yes
30 feet = 10 yards and 0 feet
A < B = 0
2 + 3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8 */