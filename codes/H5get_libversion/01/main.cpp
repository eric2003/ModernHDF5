#include "hdf5.h"
#include <iostream>

int main ( int argc, char **argv )
{
    unsigned majnum, minnum, relnum;
    H5get_libversion (&majnum, &minnum, &relnum);
	std::cout << "majnum = " << majnum << std::endl;
	std::cout << "minnum = " << minnum << std::endl;
	std::cout << "relnum = " << relnum << std::endl;
    std::cout << "haha\n";
    return 0;
}
