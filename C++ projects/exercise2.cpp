
#include <iostream>

using namespace std;

int main()
{

int i, sum=0;
    
    cout << "Find the first ten natural numbers" <<endl;
    cout << "The natural numbers are"<<endl;
    
    for (i=1; i<=10; i++)
    {
    cout<< i <<endl;
    sum=sum+i;
    } 
    
    cout << "The sum of the first ten natural numbers :" << sum << endl;
    return 0;
}