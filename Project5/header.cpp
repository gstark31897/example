#include "header.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& Header::Output(ostream &out) const
{
   out << "<h" << m_headerLevel << '>';
   out << m_text << "</h" << m_headerLevel;
   out << '>' << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& Header::Input(istream &in)
{
   string headerSize;
   getline(in, headerSize);

   if (headerSize == "size_big")
      m_headerLevel = 1;
   else if (headerSize == "size_medium")
      m_headerLevel = 2;
   else if (headerSize == "size_small")
      m_headerLevel = 3;

   getline(in, m_text);

   return in;
}
