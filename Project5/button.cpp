#include "button.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& Button::Output(ostream &out) const
{
   out << "<input type='button' name='";
   out << m_name  << "'; value='";
   out << m_value << "' />" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& Button::Input(istream &in)
{
   getline(in, m_name);
   getline(in, m_value);
   return in;
}
