//Di Fei Lin Lecture 2 9/16/24

#include <iostream>

#include <string>

using namespace std;

int main(){
    int intMine = 12; //gave 12 as the value of an int
    float floatMine = 12.12; // gave 12.12 as as the value of a float
    double doubleMine = 12.123; //gave 12.123 as the value of a double 
    char charMine = 'H'; // gave H as the character value of a char 
    bool boolMine = false; // made the bool false 
    string stringMine = "my string"; // string named

    cout<<"integer: "<<intMine<<endl; //print integer
    cout<<"float: "<<floatMine<<endl; //print float
    cout<<"double: "<<doubleMine<<endl; //print double
    cout<<"character: "<<charMine<<endl; //print character
    cout<<"boolean: "<<boolMine<<endl; //print boolean
    cout<<"string: "<<stringMine<<endl; //print string 

    char firstCompare = 'A'; //establishes the char as A 
    char secondCompare = 'B'; //establishes the char as B
    cout<<"A < B = "<<(firstCompare<secondCompare)<<endl; //making the comparsion as true/false, returns 1 

    int inches;
    inches = 100; //establishes the integer 

    cout<<inches<<" inch(es) = "; //inches prints
    cout<<inches/12<<" feet (foot) and "; // finds the feet
    cout<<inches%12<<" inch(es) "<<endl;//finds the remainder


    cout<<"2 + 3.5 = "<<2 + 3.5<<endl; //solves and prints the equation
    cout<<"6 / 4 + 3.9 = "<<6 / 4 + 3.9<<endl; // solves and prints the equation 
    cout<<"5.4 * 2 - (13.6 + 18 / 2) = "<<5.4 * 2 - (13.6 + 18 / 2)<<endl;// solves and prints the equation 

    return 0;
}

/*integer: 12
float: 12.12
double: 12.123
character: H
boolean: 0
string: my string
A < B = 1
100 inch(es) = 8 feet (foot) and 4 inch(es) 
2 + 3.5 = 5.5
6 / 4 + 3.9 = 4.9
5.4 * 2 - (13.6 + 18 / 2) = -11.8*/