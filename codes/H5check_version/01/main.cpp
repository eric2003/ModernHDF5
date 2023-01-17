#include "hdf5.h"
#include <iostream>

int main ( int argc, char **argv )
{
    unsigned majnum, minnum, relnum;
    H5get_libversion (&majnum, &minnum, &relnum);
    std::cout << "majnum = " << majnum << std::endl;
    std::cout << "minnum = " << minnum << std::endl;
    std::cout << "relnum = " << relnum << std::endl;
    herr_t result = H5check_version( majnum, minnum, relnum );
    std::cout << "result = " << result << std::endl;
    return 0;
}
