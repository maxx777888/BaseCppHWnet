#include "Figure.h"


std::string Figure::get_name() { return name; }

void print_info(Figure* x)
{
    x->printInfo();
}