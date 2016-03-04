#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

Event :: Event() {
	Title = "Free";
	Time = -1;
}

Event :: Event(int time, string name) {
	Time = time;
	Title = name;
}

int Event :: getTime() {
	return Time;
}

string Event :: getTitle() {
	return Title;
}

void Event :: setTime(int T) {
	Time = T;
}

void Event :: setTitle(string name) {
	Title = name;
}
