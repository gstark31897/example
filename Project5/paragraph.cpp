#include "paragraph.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& Paragraph::Output(ostream &out) const
{
   out << "<p>" << m_text << "</p>" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& Paragraph::Input(istream &in)
{
   getline(in, m_text);
   return in;
}
