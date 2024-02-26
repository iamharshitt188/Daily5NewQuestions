#include<iostream>
using namespace std;
int main()
{
    int row ;
    int temp ;
    cout<<"Enter Number of ROWS";
    cin >> row;
    for(int counter = 1 ; counter <= row ; counter++)
    {
        for(int counter_2 = 1 ; counter_2 <= counter ; counter_2++)
        {
            cout<<counter_2;
        }
        cout<<endl;
    }
}