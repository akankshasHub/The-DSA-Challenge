/* GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/circular-tour-1587115620/1 */

/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
      
        int start = 0;
        int deficit = 0;
        int balance = 0;
        
        for (int i = 0; i < n; i++) {
            balance += p[i].petrol - p[i].distance;
            // If balance is negative, move the start point to the next pump
            if (balance < 0) {
                start = i + 1;
                deficit += balance;
                balance = 0;
            }
        }
        
        // Check if we can cover the total deficit with the final balance
        if (balance + deficit >= 0) {
            return start;
        } else {
            return -1;
        }
    }
};
