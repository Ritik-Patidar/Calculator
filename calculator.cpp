#include<iostream>
using namespace std ;

int main()
{
    int num_1 ;
    int num_2 ;
    int answer ;
    char userinput ;

    cout << "Please enter a number" << endl ;
    cin >> num_1 ;
    cout << "Now choose what you want to do: + , - , * , / ." << endl ;
    cin >> userinput ;
    cout << "Now enter another number" << endl ;
    cin >> num_2 ;

    if( userinput == '+' )
    {
        answer = num_1 + num_2 ;
    }
    if( userinput == '-' )
    {
        answer = num_1 - num_2 ;
    }
    if( userinput == '*' )
    {
        answer = num_1 * num_2 ;
    }
    if( userinput == '/' )
    {
        if( num_2 == 0)
        {
            cout << "infinite" << endl ;
        }
        else
        {
            answer = num_1 / num_2 ;
        }
    }
    cout << "the answer is : " << answer << endl ;
}
