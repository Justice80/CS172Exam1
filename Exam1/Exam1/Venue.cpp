#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;



void Venue :: addEvent(int time, string name) {
	Event E1(time,name);

	if (time != E1.getTime()) {
		E1.setTime(time);
		E1.setTitle(name);
		scheduledEvents[numEvents] = E1;
		numEvents++;
		cout << "Event scheduled.\n";
	}
	else {
		cout << "Couldn't schedule event :(\n";
	}

}

Event Venue :: findEvent(int time) {
	Event E1 = scheduledEvents[numEvents];

	if (time == E1.getTime()) {
		cout << E1.getTitle();
		return E1;
	}
	else {
		cout << E1.getTime();
		return E1;
	}
}

Event Venue :: findEvent(string name) {
	Event E1 = scheduledEvents[numEvents];

	if (name == E1.getTitle()) {
		cout << E1.getTime();
		return E1;
	}
	else {
		cout << E1.getTitle();
		return E1;
	}

}