
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void printCompressed(string str, int k) {
    for (int i=0; i<k; i++)
        cout << str[i];
}

int compress(string chars)
{
    int ptr = 0;    //  tracker to fill the required output values in string itself
    int i = 0;  //  tracker to fetch the starting element of repeating chars
    int j = 1;      //  tracker to trace the chars till the last repeating char (repeating searching pointer)
    if (chars.size() > 1)   //  EDGE CONDITION
    {
        while (j < chars.size())    //  traverse till the end of string
        {
            if (chars[j] == chars[i])   //  if succeeding element is equal
                j++;           //   then move the repeating char tracer further to check for the succeeding equality
            else    //  if succeeding element found new (breaking the repeating pattern)
            {
                int count = j - i;  // count total no. of repeating chars from starting point to the breaking point
                chars[ptr++] = chars[i];    //  place the tracker starting char to the output values tracker and increment it
                if (count > 1)  //  if the repeating char count is greater than 1, then only place count in output value tracker
                {
                    string cnt = to_string(count);  // output value pointer must be in string format, therefore converting count value into string
                    for (char ch : cnt) // as the output should be in char form, therfore, let say if, count=12, then in output it should be "1","2"
                        chars[ptr++] = ch;  //  update the output value by splitting the count digits
                }
                //  after the updation process
                i = j;  //  update the tracker's start pointer with the position of the newly found repeat pattern breaker char
                j++;    //  and advance the repeating char searching pointer
            }
        }
    }
    // When the while loop breaks, then the updation of the last pattern will remain incomplete, to complete that,
    // repeating the updation process one more time
    int count = j - i;  //  count the last repeating chars
    chars[ptr++] = chars[i];    //  update the output value with last char
    if (count > 1)  //  if repeated count greater than one, then also append the count
    {
        string cnt = to_string(count);
        for (char ch : cnt) //  split the count string to digit char
            chars[ptr++] = ch;  //  append each digit char
    }

    printCompressed(chars, ptr);    //  printing the Compressed form of the input string (passing the updated string and the pointer upto which the string got updated)
    return ptr;
}

int main() {
    string chrstr;
    chrstr = "aaaaaaaabcccccccbbcbccccbbbbbbbbbbbbcddddd";
    cout << "Original: " << chrstr << endl;
    cout << "Compressed: ";
    compress(chrstr);   //  Compress the String
    
    return 0;
}
