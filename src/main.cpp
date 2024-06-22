#include <cstdlib>
#include "iostream"
#include "string"
#include "cstring"
#include "fstream"
#ifndef _WIN32
#include "direct.h"
#else
#include "sys/stat.h"
#include "sys/types.h"
#endif

int main(int argc, char* argv[])
{
    if(argc > 2 && std::strcmp(argv[2], "-mk")==0)
    {
      std::string filename = argv[2];
      std::ofstream outfile(filename);
      if(outfile.is_open())
      {
        std::cout << "File made successfully. Check parent directory.";
        outfile.close();
      } else
      {
        std::cerr << "Error creating file.\n";
      }
    } else if(std::strcmp(argv[1], "-mkd")==0)
    {
        std::string dirname = argv[2];
#ifndef _WIN32 
        if(_wmkdir(dirname.c_str())==0)
#else
        if(mkdir(dirname.c_str(), 0755)==0) 
#endif            
        
        {

        }    
        
    }
}