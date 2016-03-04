#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

bool Venue::validTime(int Time) {

	for (int i = 0; i < 12; i++) {
			if (scheduledEvents[i].getTime() == Time) {
				return false;
			}
		}

		return true;
}

Venue::Venue() {
	Event E1;
	numEvents = 1;
	Event scheduledEvents[12];
	scheduledEvents[numEvents - 1] = E1;
	numEvents++;
}

void Venue :: addEvent(int time, string name) {
	
	
	if (validTime(time) == true) {
		Event E1(time, name);
		scheduledEvents[numEvents] = E1;
		numEvents++;
		cout << "Event scheduled\n";
	}
		
	else
		cout << "Couldn't schedule event.\n";

}

Event Venue :: findEvent(int time) {
	for (int t = 0; t < numEvents; t++){
		if (scheduledEvents[t].getTime() == time){
			return scheduledEvents[t];
		}
	}

	Event E1;
	return E1;
}

Event Venue :: findEvent(string name) {
	for (int t = 0; t < numEvents; t++){
		if (scheduledEvents[t].getTitle() == name){
			return scheduledEvents[t];
		}
	}

	Event E1;
	return E1;
}