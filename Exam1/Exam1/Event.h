#ifndef EVENT_H_
#define EVENT_H_
#include <iostream>
#include <string>

using namespace std;

class Event {
private:
	int Time;
	string Title;
public:
	Event();
	Event(int time, string name);
	int getTime();
	string getTitle();
	void setTime(int T);
	void setTitle(string name);
};

#endif