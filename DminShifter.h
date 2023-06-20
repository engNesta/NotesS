//
// Created by Nesta on 2023-06-20.
//

#include <iostream>
#include <vector>
#include <string>

class DminShifter {
public:
//--------------------------------------------------------------
    //Attributes:
    std::string name = "DminShifter";
    std::string description = "This class shifts the notes in the Dmin chord.";
//--------------------------------------------------------------
    //Constructor:
    DminShifter()=default; //Default constructor
//--------------------------------------------------------------
    //Methods:
    void shiftDmin(std::vector<int> &temp){
        temp[1] +=  3;
        temp[3] +=  3;
        temp[5] +=  3;

        std::cout << "F#min: " << temp[1] << " " << temp[3] << " " << temp[5] << std::endl;
    }
};
