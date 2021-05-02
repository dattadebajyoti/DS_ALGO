class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int seggregate(int arr[], int n)
    {
        int count_non_positive = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(arr[i] <= 0)
            {
                int temp = arr[i];
                arr[i] = arr[count_non_positive];
                arr[count_non_positive] = arr[count_non_positive];
                
                count_non_positive++;
            }
        }
        
        return count_non_positive;
    }
    
    int findMissingPositive(int arr[], int size)
    {
        int i;
        
        for (i = 0; i < size; i++) 
        {
            if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
            {
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
        }
        
        for (i = 0; i < size; i++)
        {
            if (arr[i] > 0)
            {
                return i+1;
            }
        }
 
 
        return size + 1;
    }
    
    int missingNumber(int arr[], int n) 
    { 
        // seggregate +ve and -ve numbers
        int count_non_positive = seggregate(arr, n);
        
        return findMissingPositive(arr + count_non_positive, n - count_non_positive);
    } 
};
