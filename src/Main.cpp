#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
#include "Register.hpp"

//code created by Adolfo Nava
//Source/reference:https://youtu.be/uTXHUIJMxj0 item sorting

int main()
{
    double total_value_item;
    double item_price[4] = {0,0,0,0};
    double item_price_for_list[4] = {0,0,0,0};
    std::string Input_item_name[4] ={"","","",""};
    std::string verification="";
    std::string Item_request="";
    int counter = 0;
    double index[4];
    double Item_Quantity_request=1.00;
    int item_list_order_number=0;




    std::cout<<"Welcome to our cafe! \nWe first have to setup a selection of different items for you being typing 'list' now: ";
    std::cin>>verification;
    while (verification != "list")
    {
        std::cout<<"Failed to input list please type in 'list' now: ";
        std::cin>>verification;
    }

    for (int count = 0; count < 4; count++)
    {
        std::cout<<"Please enter what item #"<<++counter<<"is listed as: ";
        std::cin>>Input_item_name[count];
        std::cout<<"How much is the price for the item above: ";
        std::cin>>item_price[count];
    }

    for(int indexvalue=0;indexvalue < 4;indexvalue++)
    {
        index[indexvalue] = indexvalue;
    }
    for(int countout=0;countout<3;countout++)
    {
        for(int coutinner=countout+1;coutinner<4;coutinner++)
        {
            double item_price_value_temp;
                if(Input_item_name[index[countout]] > Input_item_name[coutinner])
                {
                    item_price_value_temp = index[countout];
                    index[countout] = index[coutinner];
                    index[coutinner]=item_price_value_temp;
                }
        }
    }

    std::cout<<"Now that you have listed the items in the cafe meant to be sold here they are:\n";
    for(int lastcount = 0; lastcount < 4;lastcount++)
    {
        std::cout<<"------------------------------------------------------------------------------------\n"
        <<Input_item_name[index[lastcount]]<<"    $"<<item_price_for_list[lastcount]<<"\n"
        <<"------------------------------------------------------------------------------------\n";
    }
    std::cout<<"What would you like to order? ";
    std::cin>>Item_request;
    while (Item_request != Input_item_name[0] && Item_request != Input_item_name[1] && Item_request != Input_item_name[2] && Item_request !=Input_item_name[3])
    {
        std::cout<<"Sorry what you have posted is not valid please try again now: ";
        std::cin>>Item_request;

    }
    std::cout<<"How much of this would you want? ";
    std::cin>>Item_Quantity_request;
    while(Item_Quantity_request<=0)
    {
        std::cout<<"Sorry that is an invalid number please try again now: ";
        std::cin>>Item_Quantity_request;
    }
    round(Item_Quantity_request);

    for(int check = 0;check < 4;check++)
    {
        if(Item_request == Input_item_name[check])
        {
            item_list_order_number=check;
            check = check+10;
        }
    }

   total_value_item = item_price[item_list_order_number]*Item_Quantity_request;
   std::cout<<"For the item "<<Input_item_name[item_list_order_number]<<" will be a total of $"<<total_value_item<<std::endl;
   total_value_converted(total_value_item);
return 0;
}