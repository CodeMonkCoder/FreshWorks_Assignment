#include <bits/stdc++.h>
#include <thread>
#include <time.h>
#include <map>
#include <tuple>
#include <vector>
#include <chrono>
#include <future>
#include "assignment.h"
using namespace std;

int main()
{
    create("Yash", 40);
    //to create a key with key_name,value given and with no time-to-live property

    create("Fresh", 80, 2400);
    //to create a key with key_name,value given and with time-to-live property value given(number of seconds)

    read("Yash");
    //it returns the value of the respective key in Jasonobject format 'key_name:value'

    read("Fresh");
    //it returns the value of the respective key in Jasonobject format if the TIME-TO-LIVE IS NOT EXPIRED else it returns an ERROR

    create("Yash", 60);
    //it returns an ERROR since the key_name already exists in the database

    //To overcome this error
    //either use modify operation to change the value of a key
    //or use delete operation and recreate it

    modify("Yash", 60);
    //it replaces the initial value of the respective key with new value

    del("Yash");
    //it deletes the respective key and its value from the data

    read("Yash");
    create("alp123", 34);
    create("z@af", 25);
    //threads as per the requirement
    //If there is any any error like thread not declared in the scope then change gcc complier version
    thread t1(create, "th", 20, 200); //as per the operation
    t1.join();
    thread t2(read, "th"); //as per the operation
    t2.join();
}
