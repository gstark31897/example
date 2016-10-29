#include "style.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& operator<<(ostream &out, const Style &style)
{
   out << style.m_element   << " { ";
   out << style.m_attribute << ": ";
   out << style.m_value     << "; }" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& operator>>(istream &in, Style &style)
{
   in >> style.m_element;
   in >> style.m_attribute;
   in >> style.m_value;
   return in;
}
