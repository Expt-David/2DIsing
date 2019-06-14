//  Created by Patrick Wilke on 27.05.19.
//  Copyright © 2019 Patrick Wilke. All rights reserved.
//

#include "Time_Series.hpp"
#include <vector>
#include <fstream>


int main(int argc, char const* argv[]){

    //create trajectories for temperatures 0.1,2.25 and 5.0
    std::vector<double> temperatures({0.1,2.25,5.0});
    
    for(const auto T: temperatures){
        //TODO #12 <-------------------
        system.WriteToFile();
    }

    //For Part 2 <-------------------
    //std::ofstream file;
    //file.open ("L_32_sweep.txt");
    //ADD YOUR CODE HERE
    //file.close();
    
    return EXIT_SUCCESS;
}
