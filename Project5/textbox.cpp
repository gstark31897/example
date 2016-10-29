#include "textbox.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& Textbox::Output(ostream &out) const
{
   out << "<input type='text' name='";
   out << m_name << "'/>" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& Textbox::Input(istream &in)
{
   getline(in, m_name);
   return in;
}
