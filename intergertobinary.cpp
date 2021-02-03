//this code will let you convert integers into binary with the help of recursio
#include <iostream>
#include<string>
using namespace std;

string BinaryString(int number)
{ 
    //base cases
    if(number == 0)
    {
     return "0";
    }
    if (number == 1)
    {
        return "1";//base two

    }else
    {
        return BinaryString(number /2 ) + BinaryString(number % 2);
    }
    
    
}
int main(){
    //string bin;
   // bin = BinaryString(1);
    //cout<<bin;
   // cout<<BinaryString(0)<<endl;
      cout<<BinaryString(17) << endl;    
    return 0;
} 
