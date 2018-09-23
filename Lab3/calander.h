#include <iostream>
#include <string>
#include <vector>

#ifndef calander_h
#define calander_h

//this comment can be deleted

using namespace std;

class Date
{
public:
  Date(int m, int d, int y)
  {
    set_month(m);
    set_day(d);
    set_year(y);
  }
  // setters for Date class
  void set_month(int m) { month = m; }
  void set_day(int d) { day = d; }
  void set_year(int y) { year = y; }
  // getters for Date class
  int get_month() const { return month; }
  int get_day() const { return day; }
  int get_year() const { return year; }

  //private variables untouchable outside of structs
private:
  int month;
  int day;
  int year;
};

class Time
{
public:
  Time(int h, int m)
  {
    set_hours(h);
    set_minutes(m);
  }
  // setters for class Time
  void set_hours(int h) { hours = h; }
  void set_minutes(int m) { minutes = m; }
  // getters for class Time
  int get_hours() const { return hours; }
  int get_minutes() const { return minutes; }

  //private Time variable
private:
  int hours;
  int minutes;
};

class Calendar
{ //unfinished, code written is not in working order
public:
  /*  void addEvent (Event * e) {
    event.push_back(e);
    return;
  }
  void searchEvent(int month) {
    cout << "This will print out all event of a month ";
    return;
  }
*/
private:
  //  vector <Event *> event;
};

class Event
{
public:
  Event(string t, string i, string l)
  {
    set_title(t);
    set_invitee(i);
    set_location(l);
    //set_date(Date()));
    //set_time(Time());
    //set_duration(d);
  }

  //setters
  void set_EventInfo(const vector<string> &x) { EventInfo = x; }
  void set_title(string t) { title = t; }
  void set_invitee(string i) { invitee = i; }
  void set_location(string l) { location = l; }
  //void set_date(int d) { Date() = d; }
  //void set_time(int t) { Time() = t; }
  //void set_duration(int d) { duration = d; }

  // getters
  const vector<string> &get_EventInfo() const { return EventInfo; }
  string get_title() const { return title; }
  string get_invitee() const { return invitee; }
  string get_location() const { return location; }
  //int get_date() { return Date(); }
  //int get_duration() { return duration; }

  //my attempt at putting the variables into a vector
  void inputEvent(string t, string i, string l)
  {
    vector<string> eventVector;
    eventVector.push_back(t);
    eventVector.push_back(i);
    eventVector.push_back(l);

    for (int i = 0; i < eventVector.size(); i++)
    {
      cout << eventVector[i];
    }
  }

private:
  vector<string> EventInfo;

  string title;
  string invitee;
  string location;
  //int date;
  //int time;
  //int duration;
};

class Invitee
{
public:
  void format_check()
  {
    // this is check the email format
  }

private:
  string email;
};

#endif