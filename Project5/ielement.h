#ifndef H_IELEMENT
#define H_IELEMENT

#include <string>
#include <ostream>
#include <istream>

class IElement
{
public:
   IElement() {};
   ~IElement() {};

   friend std::ostream& operator<<(std::ostream&, const IElement&);
   friend std::istream& operator>>(std::istream&, IElement&);

protected:
   virtual std::ostream& Output(std::ostream&) const = 0;
   virtual std::istream& Input(std::istream&) = 0;
};

#endif
