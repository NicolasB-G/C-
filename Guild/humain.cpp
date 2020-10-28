#include "humain.h"
#include <string>

humain::humain() : Race()
{
    humain::nom = "humain";
}

humain::~humain()
{
}

string humain::to_string()
{
    string info;

    info = "humain";

    return info;
}

