/*
 * Copyright 2022 University of Michigan EECS183
 *
 * Person.cpp
 * Project UID 28eb18c2c1ce490aada441e65559efdd
 *
 * Vicky, Kelly, Reese, Khadra
 * <#Uniqnames#>
 *
 * Final Project - Elevators
 */

#include "Person.h"
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

Person::Person(string inputString) : Person() {
    //TODO: Implement non-default constructor
    inputString;
}

bool Person::tick(int currentTime) {
    //TODO: Implement tick
    if (currentTime % TICKS_PER_ANGER_INCREASE == 0) {
        angerLevel++;
    }
    
    if (angerLevel >= MAX_ANGER) {
        return true;
    }
    //Returning false to prevent compilation error
    return false;
}

void Person::print(ostream &outs) {    
    //TODO: Implement print
}

//////////////////////////////////////////////////////
////// DO NOT MODIFY ANY CODE BENEATH THIS LINE //////
//////////////////////////////////////////////////////

Person::Person() {
    turn = 0;
    currentFloor = 0;
    targetFloor = 0;
    angerLevel = 0;
}

int Person::getTurn() const {
    return turn;
}

int Person::getCurrentFloor() const {    
    return currentFloor;
}

int Person::getTargetFloor() const {    
    return targetFloor;
}

int Person::getAngerLevel() const {    
    return angerLevel;
}

ostream& operator<< (ostream& outs, Person p)
{
    p.print(outs);
    return outs;
}
