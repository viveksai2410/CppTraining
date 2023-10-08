#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 3
#include "TouristVehicle.h"
#include "VehicleType.h"

void CreateObjects(TouristVehicle * arr[SIZE]);

TouristVehicle ** VehicleWithAtleastSeatFour(TouristVehicle * arr[SIZE]);

float AverageBookingHoursCharge(TouristVehicle* arr[SIZE], VehicleType val);

void bookingcharge(TouristVehicle* arr[SIZE]);

void Freespace(TouristVehicle* arr[SIZE]);


#endif // FUNCTIONALITIES_H
