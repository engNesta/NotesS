//
// Created by Nesta on 2023-06-20.
//
#include <iostream>
#include <vector>
#include <string>

class CmajShower{
    public:
//--------------------------------------------------------------
    //Attributes:
    const std::string name = "CmajShower";
    const std::string description = "This class shows the notes in the Cmaj chord.";

    //Constructor:
    CmajShower()= default; //Default constructor


//--------------------------------------------------------------
    //Methods:
    std::vector<int> showCmaj(std::vector<int> &Cmaj){
        std::vector<int> cmTemp;

        std::cout << "Cmaj: " << Cmaj[0] << " " << Cmaj[2] << " " << Cmaj[4] << std::endl;

        cmTemp.push_back(Cmaj[0]);
        cmTemp.push_back(Cmaj[2]);
        cmTemp.push_back(Cmaj[4]);

        return cmTemp;
    }
};