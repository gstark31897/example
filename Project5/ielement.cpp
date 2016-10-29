#include "ielement.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& operator<<(ostream &out, const IElement &element)
{
   // call the output method
   element.Output(out);
   return out;
}

// PRE: None
// POST: None
// RETURNS: istream that was read from
istream& operator>>(istream &in, IElement &element)
{
   // call the input method
   element.Input(in);
   return in;
}
