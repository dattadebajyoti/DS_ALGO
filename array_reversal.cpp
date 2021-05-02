void arrayReversal(int arr[],int sizeOfArray) 
{
   //Write your code here
   int i = 0;
   int j = sizeOfArray-1;
   while(i < j)
   {
       int temp = arr[i];
       arr[i]   = arr[j];
       arr[j]   = temp;
       
       i++;
       j--;
   }
}
