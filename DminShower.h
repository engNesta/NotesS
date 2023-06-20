//
// Created by Nesta on 2023-06-20.
//

#include <iostream>
#include <vector>
#include <string>

class DminShower {
public:
//--------------------------------------------------------------
    //Attributes:
    std::string name = "DminShower";
    std::string description = "This class shows the notes in the Dmin chord.";


//--------------------------------------------------------------
    //Constructor:
    DminShower()=default; //Default constructor

//--------------------------------------------------------------
    //Methods:
    std::vector<int> minShow(std::vector<int> &Dmin){
        std::vector<int> dmTemp;

        std::cout << "Dmin: " << Dmin[1] << " " << Dmin[3] << " " << Dmin[5] << std::endl;

        dmTemp.push_back(Dmin[1]);
        dmTemp.push_back(Dmin[3]);
        dmTemp.push_back(Dmin[5]);

        return dmTemp;
    }
};