//
//  main.cpp
//  CSci41-F18-PQ1 for 11am lab
//
//  Created by Shih-Hsi Liu on 9/14/18.
//  Copyright Â© 2018 Shih-Hsi Liu. All rights reserved.
//
/*
 Node class: 12 bonus points
 Date::isLeapYear: 10 points
 Date::isFuture: 18 points
 Date::checkRange: 10 points
 Reminder::searchAndDelete: 20 points
 isPalindrome: 12 points
 mirror: 15 points
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 12 BONUS POINTS
/* 1. introduce a Node class with integer called data and Node pointer called next inside data member.
   2. introduce constructor, destructor, getter and setter
   3. in main function, introduce two nodes and connect them together.
*/
class Node
{
    //add contents here
};

//12 points
/*
  checking if a string is a palindrome or not (return true if it is. otherwise return false). Palindrome means a string reads the same from beginning to end and from end to beginning. For example, abba, abcba.
*/
bool isPalindrome(string exp)
{
    string exp;
    bool palindrome;
    
    if(exp = r)
}

//15 points
/*
  flip 2D vector from left to right (or left to right). for example
  1, 2, 3  =>   3, 2, 1
  4, 5, 6       6, 5, 4
*/
void mirror(vector<vector<int>>& vec)
{
    vector <int> vecRev;
    vecRev[] = &vec[];

  vecRev.push_back(vec[2]);
  vecRev.push_back(vec[1]);
  vecRev.push_back(vec[0]);
  

}

void print(vector<vector<int>>& vec)
{
    for (int i=0; i < vec.size(); i++){
        for (int j =0; j < vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
class Date
{
private:
    int month;
    int day;
    int year;
    //NOTE: Feb. here only has 28 days. Use isLeapYear whenever needed.
    int upper[12] = {31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30, 31};
    

public:
    Date(int m=0, int d=0, int y=0)
    {
        month= m;
        day = d;
        year = y;
    }
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }
    
    
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d;}
    
    //
    /* 18 points
       compare current object/pointer with today. If current Date object/pointer is future of today, return true. Otherwise, return false.
    */
    bool isFuture(Date* today){
       bool isTheFuture;
        vector <int> getDate;
        
      
      if (getDate[] < this->today){
          isTheFuture = false;
      } 
      else if (getDate[] > this->today){
          isTheFuture = true;
      }
      cout << isTheFuture;
    }
    
    //10 points
    /*
        check if year data member is leap year or not. Return true if it is. Otherwise, return false.
    */
    bool isLeapYear()
    {
        bool leapYear;
        
        if(getYear() % 400 == 0) {
            leapYear = false;
        }
        else if(getYear() % 4 == 0) {
            leapYear = true;
        }
        else if(getYear() % 100 == 0) {
            leapYear = false;
        }
        if (leapYear = true){
        cout << "it is leap year! " << endl;
        }
        else { cout << "not a leap year." << endl; }
        
    }
};

class Item
{
private:
    string description;
    Date* date;
    
public:
    Item(string desc ="", Date* d = nullptr)
    {
        description = desc;
        date = d;
    }
    string getDescription() { return description; }
    Date* getDate() { return date; }
    void print()
    {
        cout<<"Item: "<<description<<" "<<date->getMonth()<<"/"<<date->getDay()<<"/"<<date->getYear()<<endl;
    }
};

class Reminder
{
private:
    vector<Item*>* list;
public:
    Reminder() { list = new vector<Item*>(); }
    ~Reminder() { delete list; }
    void addItem(Item* item)
    {
        list->push_back(item);
    }
    //20 points
    /*
       Seach all items in the reminder that is older than today. If found, delete those old items.
    */
    void searchAndDeleteItems(Date* today)
    {
        //add contents here...
    }
    void printAllItems()
    {
        for (int i=0; i <list->size(); i++)
        {
            list->at(i)->print();
        }
    }
    
};
int main(int argc, const char * argv[]) {
    //You don't need to touch main function
    Date* test = new Date(1, 1, 2200);
    cout<<test->isLeapYear()<<endl;
    Date* today = new Date(9, 17, 2018);
    Date* date1 = new Date(9, 17, 2018);
    Date* date2 = new Date(9, 14, 2018);
    Date* date3 = new Date(9, 21, 2018);
    Reminder* myReminder = new Reminder();
    Item* item1 = new Item("take programming exam", date1);
    Item* item2 = new Item("explain lab 2", date2);
    
    
    Item* item3 = new Item("quiz 3", date3);
    myReminder->addItem(item1);
    myReminder->addItem(item2);
    myReminder->addItem(item3);
    myReminder->printAllItems();
    myReminder->searchAndDeleteItems(today);
    myReminder->printAllItems();
    cout<<isPalindrome("123+321")<<endl;
    cout<<isPalindrome("1221")<<endl;
    vector<vector<int>> vec2D = {{1,2, 3},
        {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    print(vec2D);
    mirror(vec2D);
    print(vec2D);
    return 0;
}