#include "Functionalities.h"

void CreateObjects(TouristVehicle *arr[SIZE])
{
    arr[0] = new TouristVehicle("T101", VehicleType::BIKE, 2, 366.7f);
    arr[1] = new TouristVehicle("T101", VehicleType::CAB, 6, 386.7f);
    arr[2] = new TouristVehicle("T101", VehicleType::CAB, 8, 336.7f);
}

TouristVehicle **VehicleWithAtleastSeatFour(TouristVehicle *arr[SIZE])
{
    TouristVehicle **result = new TouristVehicle *[SIZE];

    for(int i=0; i<SIZE; i++){
        if(arr[i]->seatCount() >= 4){
            result[i] = arr[i];
        }
    }

    return result;
}

float AverageBookingHoursCharge(TouristVehicle *arr[SIZE], VehicleType val)
{
    float total = 0.0f;

    for(int i=0; i<SIZE; i++){
        if(arr[i]->vtype() == val){
            total += arr[i]->perHourBookingCharge();
        }
    }
    return total/SIZE;
}

void bookingcharge(TouristVehicle *arr[SIZE])
{
    float max = arr[0]->perHourBookingCharge();
    for(int i=1; i<SIZE; i++){

        if(max < arr[i]->perHourBookingCharge()){
            max = arr[i]->perHourBookingCharge();
            std::cout<< *arr[i]<<"\n";
        }
    }
    std::cout<<"\n";
}

void Freespace(TouristVehicle *arr[SIZE])
{
    for(int i=0; i<SIZE; i++){
        std::cout<<"deleting objects"<<"\n";
        delete arr[i];
    }
}
