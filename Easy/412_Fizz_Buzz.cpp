/*
Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*/
class Solution 
{
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> result;
        for(int x=1;x<n+1;x++)
        {
            if(!(x%15))
                result.push_back("FizzBuzz");
            else if(!(x%5))
                result.push_back("Buzz");
            else if(!(x%3))
                result.push_back("Fizz");
            else
                result.push_back(to_string(x));
        }
        return result;
    }
};
