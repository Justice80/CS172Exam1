#ifndef VENUE_H_
#define VENUE_H_
#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

class Venue {
private:
	int numEvents;
	Event scheduledEvents[12];
	bool validTime(int time);
public:
	Venue();
	void addEvent(int time, string name);
	Event findEvent(int time);
	Event findEvent(string name);
};

#endif