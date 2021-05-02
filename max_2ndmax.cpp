class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         
         vector<int> maxv;
         
         for(int i = 0; i < sizeOfArray; i++)
         {
             if(arr[i] > max)
             {
                 max = arr[i];
             }
         }
         
         for(int i = 0; i < sizeOfArray; i++)
         {
             if(arr[i] > max2 && arr[i] < max)
             {
                 max2 = arr[i];
             }
         }
         
         maxv.push_back(max);
         if(max2 == INT_MIN)
         {
             maxv.push_back(-1);
         }
         else
         {
              maxv.push_back(max2);
         }
         
         return maxv;
         
    }
};
