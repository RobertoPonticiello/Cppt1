
#include <fstream>
#include <iostream>


int replace(std::string str, char **argv)
{
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string::size_type pos;
    std::ofstream out;

    out.open((std::string(argv[1]) + ".replace").c_str());
    if (out.fail())
    {
        return(1);
    }

    if (s1.empty())
        return (1);

    for (std::string::size_type i = 0; i < str.size(); i++)
    {
        pos = str.find(s1, i);
        if (pos != std::string::npos && pos == i)
        {
            out << s2;
            i += s1.size() - 1;
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
    std::ifstream in;
    std::string str;

    if(argc != 4)
    {
        return(1);
    }
    in.open((argv[1]));
    if (in.fail())
    {
        return (1);
    }

    while (in >> std::noskipws >> c)
        str += c;
    in.close();
    return (replace(str, argv));
}