//Di Fei Lin Lecture 2 9/16/24

#include <iostream>

#include <string>

using namespace std;

int main(){
    int intMine = 12; 
    float floatMine = 12.12; 
    double doubleMine = 12.123;
    char charMine = 'H';
    bool boolMine = false;
    string stringMine = "my string";

    cout<<"integer: "<<intMine<<endl; //naming integer
    cout<<"float: "<<floatMine<<endl; //naming float
    cout<<"double: "<<doubleMine<<endl; //naming double
    cout<<"character: "<<charMine<<endl; //naming character
    cout<<"boolean: "<<boolMine<<endl; //naming boolean
    cout<<"string: "<<stringMine<<endl; //naming string 

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