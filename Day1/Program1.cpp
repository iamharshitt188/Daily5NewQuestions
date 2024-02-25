#include<iostream>
using namespace std;

int main()
{
    int number1;
    cout<<"Enter a number";
    cin >> number1;
    int number2;
    cout<<"Enter Second Number"<<endl;
    cin >> number2;
    int temp = number1;
    number1 = number2;
    number2 = temp;
    cout<<"Value of number 1:" << number1 <<endl;
    cout<<"Value of number 2:" << number2 ;
}