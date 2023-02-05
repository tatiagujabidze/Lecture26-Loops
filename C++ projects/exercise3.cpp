
#include <iostream>

using namespace std;

int main()
{   
    
    int n, i, sum=0;
    
    cout<<"input a number of terms"<<endl;
    cin>>n;
    
    cout<<"The natural numbers upto "<<n<<" terms are:"<<endl;  

    for (i=1; i<=n; i++)
    
    {
    cout<<i<<endl;
    sum=sum+i;
    }
    
    cout << "The sum of the natural numbers is: "<<sum<<endl;
    return 0;
}