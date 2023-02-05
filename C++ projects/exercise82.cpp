
#include <iostream>

using namespace std;

int main()
{
    int numOne, numTwo;
    
    cout << "Compare first number to the second numbers"<<endl;
    cout << "Enter number one"<<endl;
    cin >> numOne;
    cout << "Enter number two"<<endl;
    cin >> numTwo;
    
    if (numOne==numTwo)
    cout << numOne << "==" << numTwo <<endl;
    
    if (numOne!=numTwo)
    cout << numOne << "!=" << numTwo <<endl;
    
    if (numOne>numTwo)
    cout << numOne << ">" << numTwo <<endl;
    
    if (numOne<numTwo)
    cout << numOne << "<" << numTwo <<endl;
    
    if (numOne>=numTwo)
    cout << numOne << ">=" << numTwo <<endl;
    
    if (numOne<=numTwo)
    cout << numOne << "<=" << numTwo <<endl;
    
    
    return 0;
}