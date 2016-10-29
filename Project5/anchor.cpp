#include "anchor.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& Anchor::Output(ostream& out) const
{
   out << "<a href='" << m_href;
   out << "'>" << m_text << "</a>" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& Anchor::Input(istream& in)
{
   getline(in, m_href);
   getline(in, m_text);
   return in;
}
