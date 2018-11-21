#pragma once
#include "Booking.h"
class BookingNode
{
public:
	BookingNode();
	~BookingNode();
	Booking *booking;
	BookingNode *next;
};

