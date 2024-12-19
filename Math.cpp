#include <iostream>
#include <cmath>
//Author: Robin-E-Dupuis
void additions(){
 using std::cout;
using std::cin;
using std::endl;
double number;
double otherNumber;
double total;
cout<<"Enter A Number: "<<endl;
cin>>number;
cout<<"Enter The Number You Want To Add It To: "<<endl;
cin>>otherNumber;
total = number + otherNumber;
cout<<"The Result Of The Addition Is: "<<total<<endl;
cout<<""<<endl;
cout<<""<<endl;
}

void subtractions(){
using std::cout;
using std::cin;
using std::endl;
double number;
double otherNumber;
double total;
cout<<"Enter A Number: "<<endl;
cin>>number;
cout<<"Enter The Number To Substract It By: "<<endl;
cin>>otherNumber;
total=number-otherNumber;
cout<<"The Result Of The Subtraction Is: "<<total<<endl;
cout<<""<<endl;
cout<<""<<endl;
}

void multiplications(){
using std::cout;
using std::cin;
using std::endl;
double number;
double otherNumber;
double total;

cout<<"Enter A Number: "<<endl;
cin>>number;
cout<<"Enter The Number To Multiply It By: "<<endl;
cin>>otherNumber;
total=number*otherNumber;
cout<<"The Result Of The Multiplication Is: "<<total<<endl;
cout<<""<<endl;
cout<<""<<endl;
}

void divisions(){
using std::cout;
using std::cin;
using std::endl;
double number;
double otherNumber;
double total;
cout<<"Enter The Dividend: "<<endl;
cin>>number;
cout<<"Enter The Divisor: "<<endl;
cin>>otherNumber;
total=number/otherNumber;
cout<<"The Quotient Of the Division Is: "<<total<<endl;
cout<<""<<endl;
cout<<""<<endl;
}

void powers(){
    using std::cout;
    using std::cin;
    using std::endl;

    double number;
    double exp;
    double product;
    cout<<"Enter A Base: ";
    cin>>number;
    cout<<"Enter It's Exponent: ";
    cin>>exp;

    product= pow(number,exp);
    cout<<"The Result Of The Exponentiation is: "<<product<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}

void modulation(){
    using std::cout;
    using std::cin;
    using std::endl;

    int Dividend;
    int Divisor;
    double product;
    cout<<"Enter A Dividend: ";
    cin>>Dividend;
    cout<<"Enter It's Divisor: ";
    cin>>Divisor;

    product= Dividend%Divisor;
    cout<<"The Remainder Of The Modulation is: "<<product<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}

void square(){
    using std::cout;
    using std::cin;
    using std::endl;

    int number;
    
    double product;
    cout<<"Enter A Number: ";
    cin>>number;
    

    product= sqrt(number);
    cout<<"The Square Root Of "<<number<<" Is: "<<product<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
}

int main(){
using std::cout;
using std::cin;
using std::endl;
int choice;
while(choice!=0){
cout<<"----------------------"<<endl;
cout<<"---Calculator Menus---"<<endl;
cout<<"----------------------"<<endl;
cout<<"0. Quit App"<<endl;
cout<<"1. Additions"<<endl;
cout<<"2. Subtractions"<<endl;
cout<<"3. Multiplications"<<endl;
cout<<"4. Divisions"<<endl;
cout<<"5. Powers"<<endl;
cout<<"6. Modulation"<<endl;
cout<<"7. Square Root"<<endl;
cout<<"----------------------"<<endl;
cout<<"Enter Your Choice: "<<endl;

cin >> choice;

   switch(choice){

        case 0:
        cout<<"Quitting Application..."<<endl;
        break;

        case 1 :
        additions();
        break;

        case 2 :
        subtractions();
        break;

        case 3:
        multiplications();
        break;

        case 4:
        divisions();
        break;

        case 5:
        powers();
        break;

        case 6:
        modulation();
        break;

        case 7:
        square();
        break;

    }
}
    return 0;
}
