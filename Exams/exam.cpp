#include "exam.h"
#include <sstream>

using namespace std;

istream& operator>>(stringstream& ss, exam& ex)
{
    string buf;
    return ss >> buf >> buf >> ex.place >> ex.name_faculty >> ex.mark;
}
