#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    int arr[] = { 1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int window_size = 4;
    
    int max_sum = 0;
    for(int i = 0; i < window_size; i++)
    {
        max_sum = max_sum + arr[i];
    }
    
    int window_sum = max_sum;
    
    for(int i = window_size; i < n; i++)
    {
        window_sum += arr[i] - arr[i - window_size];
        max_sum = max(max_sum, window_sum);
    }
    
    
    cout<< max_sum<<endl;
 
    return 0;
}
