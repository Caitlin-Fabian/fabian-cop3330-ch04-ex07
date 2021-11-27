#include "std_lib_facilities.h"
#include <string>

int toInt(string num){

    int newNum;
    vector<string>numbers;

    for(char c: num){
        if(c >= '0' && c <= '9')
        {
            stringstream geek(num);
            geek >> newNum;
            return newNum;
        }
    }
      
    numbers.push_back("zero");
    numbers.push_back("one");
    numbers.push_back("two");
    numbers.push_back("three");
    numbers.push_back("four");
    numbers.push_back("five");
    numbers.push_back("six");
    numbers.push_back("seven");    
    numbers.push_back("eight");
    numbers.push_back("nine");
        
   for(int i = 0; i< numbers.size(); ++i){
       if(num.compare(numbers[i])== 0){
           newNum = i;
       }
   }

   return newNum;
}
int main()
{
    String operation;
    string num1;
    string num2;
    int newNum1;
    int newNum2;
    int res;
    
    cin >> num1 >> num2 >> operation;

    newNum1 = toInt(num1);
    newNum2 = toInt(num2);
   
    //cout << newNum1 << operation << newNum2;

    if(operation == "+"){
        res = newNum1+newNum2;
    }

    else if(operation == "-"){
        res = newNum1 - newNum2;
    }

    else if(operation == "*"){
        res = newNum1 * newNum2;
    }
    
    else if(operation == "/"){
        res = newNum1 / newNum2;
    }   
    
    cout << newNum1 << operation << newNum2 << " = " << res;

    return 0;
}