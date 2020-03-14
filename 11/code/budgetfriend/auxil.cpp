// auxil.cpp
#include "auxil.h"
#include "budget.h"


/*
 * definition of member function addBudget
 * this function is declared a friend by the Budget class
 * It adds the value of argument b to the static corpBudget
 * member variable of the budget class
 */
void Aux::addBudget(double b) {
    auxBudget += b;
    Budget::corpBudget += auxBudget;
}
