#include "Register.hpp"
#include <iostream>
int total_value_conversion(double TotalCost)
{

 double 1dollarbills =0;
 double 5dollarbills=0;
 double 10dollarbills=0;
 double 20dollarbills=0;
double total_value_converted=0;


std::cout<<"You need a total of $"<<TotalCost<<" for your order now you have put in only bills that you want to put in."<<endl;

std::cout<<"How many 1 dollar bills do you want to use? ";
std::cin>>1dollarbills;
while(1dollarbills < 0)
{
    std::cout<<"The number value was an invalid value please try again: ";
    std::cin>>1dollarbills;
}

std::cout<<"How many 5 dollar bills do you want to use? ";
std::cin>>5dollarbills;
while(5dollarbills < 0)
{
    std::cout<<"The number value was an invalid value please try again: ";
    std::cin>>5dollarbills;
}

std::cout<<"How many 10 dollar bills do you want to use? ";
std::cin>>10dollarbills;
while(10dollarbills <= 1)
{
    std::cout<<"The number value was an invalid value please try again: ";
    std::cin>>10dollarbills;
}

std::cout<<"How many 20 dollar bills do you want to use? ";
std::cin>>20dollarbills;
while(20dollarbills <= 1)
{
    std::cout<<"The number value was an invalid value please try again: ";
    std::cin>>20dollarbills;
}
TotalCost= TotalCost*100;
total_value_converted = (1dollarbills + 5dollarbills + 10dollarbills + 20dollarbills) * 100;
total_value_converted = total_value_converted-TotalCost;
std::cout<<"your change that you end up with is "<<total_value_converted/2000<<" in 20s";
total_value_converted = total_value_converted/2000;

std::cout<<", "<< total_value_converted/1000<<" in 10s";
total_value_converted = total_value_converted/1000;

std::cout<<", "<< total_value_converted/500<<" in 5s";
total_value_converted = total_value_converted/500;

std::cout<<", "<< total_value_converted/100<<" in 1s";
total_value_converted = total_value_converted/100;

std::cout<<", "<< total_value_converted/25<<" in quarters";
total_value_converted = total_value_converted/25;

std::cout<<", "<< total_value_converted/10<<" in dimes";
total_value_converted = total_value_converted/10;

std::cout<<", "<< total_value_converted/1000<<" in nickels";
total_value_converted = total_value_converted;

std::cout<<", "<< total_value_converted<<" in pennies";
std::cout<<std::endl<<"Thank you for ordering at this cafe have a nice day!";
return total_value_converted;
}