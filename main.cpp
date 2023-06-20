#include <iostream>
#include <vector>
#include "CmajShower.h"
#include "DminShower.h"
#include "CShifter.h"
#include "DminShifter.h"


int main() {
    std::cout << "Nesta Class tests" << std::endl;
    //create vector that holder int from 1 to 6
    std::vector<int> notes = {1,2,3,4,5,6};

    //create pointer to notes vector
    std::vector<int> *notesPtr = &notes;

    //create CmajShower object to show the notes in the Cmaj chord
    CmajShower majShow;
    std::cout << majShow.name <<  majShow.description << std::endl;
    majShow.showCmaj(notes);

    //create DminShower object to show the notes in the Dmin chord
    DminShower minShow;
    std::cout << minShow.name <<  minShow.description << std::endl;
    minShow.minShow(notes);

    //create CShifter object to shift the notes in the Cmaj chord
    CShifter majShift;
    std::cout << majShift.name <<  majShift.description << std::endl;
    majShift.shiftCmaj(notes);

    //create DminShifter object to shift the notes in the Dmin chord
    DminShifter minShift;
    std::cout << minShift.name <<  minShift.description << std::endl;
    minShift.shiftDmin(notes);

    return 0;
}
