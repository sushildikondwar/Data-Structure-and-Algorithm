/*  Problem Statement: 
    You have been given a number of stairs.
    Initially, you are at the 0th stair, and you need to reach the Nth stair.
    --> Each time you can either climb *one step (or) two steps*. <--
    You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.    */

#include <iostream>
using namespace std;

int waysToClimbStairs (int n) {
    if (n < 0)  //  BASE CASE
        return 0;
    if (n == 0) //  if no stairs
        return 1;   //  then only 1 way to say on that particular stair
        
    return (waysToClimbStairs(n-1) + waysToClimbStairs(n-2));
}

int main() {
    int noOfStairs = 10;
    cout << "Total ways to climb stairs: " << waysToClimbStairs(noOfStairs) << endl;

    return 0;
}