#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vector<int>vc(10, -1);
     int arr[20];
     int sizeofarr = sizeof(arr)/sizeof(int);
    
//   fill(vc.begin(), vc.end(), 8);
    fill(arr, arr+sizeofarr, 7);
    cout<<arr[5];

    return 0;
}
