//
// Created by Nesta on 2023-06-20.
//

#include <iostream>
#include <vector>
#include <string>

class CShifter {
public:
//--------------------------------------------------------------
    //Attributes:
    std::string name = "CShifter";
    std::string description = "This class shifts the notes in the Cmaj chord.";
//--------------------------------------------------------------
    //Constructor:
    CShifter()= default; //Default constructor
//--------------------------------------------------------------
    //Methods:
    void shiftCmaj(std::vector<int> &temp){
        temp[0] +=  3;
        temp[2] +=  3;
        temp[4] +=  3;

        std::cout << "Fmaj: " << temp[0] << " " << temp[2] << " " << temp[4] << std::endl;
    }
};

