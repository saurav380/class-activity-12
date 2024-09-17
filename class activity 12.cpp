#include<iostream>
 using namespace std;
 
 int main(){
    int number;
    
    std::cout<<"enter a positive number:";
    std::cin>>number;

    if (number<0){
        cout<<"Please enter a positive nember."<<endl;
        return 1;
    }

    long long factorial = 1; 
    for(int i=1; i<=number; ++i){
        factorial *=i;

    }
    cout<< "The factorial of"<<number<<"is"<<factorial<<endl;
    
    return 0;
 }