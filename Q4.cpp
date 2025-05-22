#include <iostream>
using namespace std;

int main ()
{
int n;
cin>>n;

int arr[n];

for (int i = 0; i < n; i++) 
    {
        cin >> arr[i]; 
        
    }
    int key;
    cin >> key;
    
    bool found = 0; 

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key)
        {
            found = 1;
            break; 
        }
    }

    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
