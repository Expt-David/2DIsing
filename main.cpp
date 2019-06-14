//  Created by Patrick Wilke on 27.05.19.
//  Copyright © 2019 Patrick Wilke. All rights reserved.
//

#include "Time_Series.hpp"
#include "2D_Ising_System.cpp"
#include <vector>
#include <fstream>
#include <iostream>


int main(int argc, char const* argv[]){

    //create trajectories for temperatures 0.1,2.25 and 5.0
    std::vector<double> temperatures({0.1,2.25,5.0});
    
    for(const auto T: temperatures){
        //TODO #12 <-------------------
        Ising_System *isys = new Ising_System(T, 32);
        isys->Simulate(50000);
        std::cout << isys->GetMagnetization() << std::endl;
        std::cout << isys->GetEnergy() << std::endl;
        // system.WriteToFile();
    }

    //For Part 2 <-------------------
    //std::ofstream file;
    //file.open ("L_32_sweep.txt");
    //ADD YOUR CODE HERE
    //file.close();
    
    return EXIT_SUCCESS;
}
