#include "budget.h"

// definition of the static member of Budget class
/*
 * As one can see in `budget.h`, the member function corpBudget is
 * declared static
 */
double Budget::corpBudget = 0;

// *
// Definition of static member function mainOffice
// This function adds the main office's budget request to
// rhe corpBudget variable
void Budget::mainOffice(double budReq) {
    corpBudget += budReq;
}
