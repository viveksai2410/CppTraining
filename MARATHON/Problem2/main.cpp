#include <iostream>
#include "Functionalities.h"
#include "TouristVehicle.h"
#include "VehicleType.h"
#define SIZE 3

int main(){
    TouristVehicle * arr[SIZE];
    CreateObjects(arr);

    TouristVehicle** vehicle = VehicleWithAtleastSeatFour(arr);

    for (int i = 0; i < SIZE; i++)
    {
        if (vehicle[i] != nullptr)
        {
            std::cout <<"vehicle obj is: "<< *vehicle[i] << "\n";
        }
    }

    std::cout<<"Average bOOKING Charges are for type CAB is " <<AverageBookingHoursCharge(arr, VehicleType::CAB)<<"\n";



    bookingcharge(arr);

    Freespace(arr);

}