//Di Fei Lin Lecture 2 9/16/24

#include <iostream>
#include <string>
using namespace std;

int main(){
    int int_mine = 12; 
    float float_mine = 12.12; 
    double double_mine = 12.123;
    char char_mine = 'H';
    bool bool_mine = false;
    string string_mine = "my string";

    cout<<"integer: "<<int_mine<<endl;
    cout<<"float: "<<float_mine<<endl;
    cout<<"double: "<<double_mine<<endl;
    cout<<"character: "<<char_mine<<endl;
    cout<<"boolean: "<<bool_mine<<endl;
    cout<<"string: "<<string_mine<<endl;

    char first_compare = 'A';
    char second_compare = 'B';
    cout<<"A - B = "<<first_compare-second_compare<<endl;

    int inches;
    inches = 100;

    cout<<inches<<" inch(es) = ";
    cout<<inches/12<<" feet (foot) and ";
    cout<<inches%12<<" inch(es) "<<endl;


    cout<<"2 + 3.5 = "<<2 + 3.5<<endl;
    cout<<"6 / 4 + 3.9 = "<<6 / 4 + 3.9<<endl;
    cout<<"5.4 * 2 - (13.6 + 18 / 2) = "<<5.4 * 2 - (13.6 + 18 / 2)<<endl;
    return 0;
}