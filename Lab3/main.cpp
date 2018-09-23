#include "calander.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

    Date d(12, 31, 1985); //sets the Month, Day, Year for the Date class
    cout << "The " << d.get_day() << "st" << " of "; //gets the day from the Date class
    cout << "the month " << d.get_month(); //gets the month from the Date class
    cout << " in " << d.get_year() << "." << endl;

    Time z(03, 55);
    cout << "You will meet at " << z.get_hours() << ":";
    cout << z.get_minutes() << "." << endl;

    Event myEvent("Date", "Madeline", "School"); //sets the Event Title, Event Location, abd Invitee
    cout << "You'll have a " << myEvent.get_title();
    cout << " at " << myEvent.get_location();
    cout << " With " << myEvent.get_invitee() << ".";
    cout << endl;
    
    Event inputEvent("Date", "Madeline","School");
    
    return 0;
}