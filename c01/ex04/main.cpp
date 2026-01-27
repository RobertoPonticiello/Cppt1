
#include <fstream>
#include <iostream>
#include <algorithm>

int replace(std::string str, char **argv)
{
    int pos;
    std::ofstream out;

    out.open((std::string(argv[1]) + ".replace").c_str());
    if (out.fail())
    {
        return(1);
    }
    for (int i = 0; i < (int)str.size(); i++)
    {
        pos = str.find(argv[2], 1);
        if (pos != -1 && pos == 1)
        {
            out << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
        {
            out << str[i];
        }
    }
    out.close();
    return (0);
}


int main (int argc, char **argv)
{
    char c;
    std::ifstream out;
    std::string str;

    if(argc != 4)
    {
        return(1);
    }
    out.open((argv[1]));
    if (out.fail())
    {
        return (1);
    }
    while(!out.eof() && out >> std::noskipws >> c)
        str =+ c;
    out.close();
    return (replace(str, argv));
}