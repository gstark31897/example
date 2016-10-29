#include <fstream>
#include <iostream>

#include "webcreator.h"
#include "ielement.h"

using namespace std;

// PRE: None
// POST: None
// RETURNS: None
void WebCreator::ReadStyle(const string &stylePath)
{
   // open the style file
   ifstream styleFile(stylePath);

   // read all the style items from the file
   Style tempStyle;
   while (styleFile >> tempStyle)
   {
      // push it to the back of the vector
      m_styleList.push_back(tempStyle);
   }

   // close the style file
   styleFile.close();
}

// PRE: None
// POST: None
// RETURNS: None
void WebCreator::ReadPage(const string &pagePath)
{
   // open the page file
   ifstream pageFile(pagePath);

   // read all the next element type
   string elementType;
   while (getline(pageFile, elementType))
   {
      // construct the right object type for the IElement
      IElement *tempElement;
      if (elementType == "HEADER")
         tempElement = new Header();
      else if (elementType == "PARAGRAPH")
         tempElement = new Paragraph();
      else if (elementType == "LINK")
         tempElement = new Anchor();
      else if (elementType == "TEXTBOX")
         tempElement = new Textbox();
      else if (elementType == "BUTTON")
         tempElement = new Button();

      // read the actual data from the file
      pageFile >> *tempElement;
      getline(pageFile, elementType);
      // add the element to the vector
      m_elementList.push_back(tempElement);
   }

   // close the page file
   pageFile.close();
}

// PRE: ReadPage and ReadStyle have been called
// POST: None
// RETURNS: None
void WebCreator::BuildPage(const string &outputPath)
{
   // open the output file
   ofstream outputFile(outputPath);

   // write out the html to the file
   OutputHeader(outputFile);
   OutputStyles(outputFile);
   OutputElements(outputFile);
   OutputFooter(outputFile);

   // close the output file
   outputFile.close();
}

// PRE: m_title has been set
// POST: None
// RETURNS: ostream that was written to
ostream& WebCreator::OutputHeader(ostream &out)
{
   // write out the head file
   out << "<!DOCTYPE html><html>" << endl;
   out << "<head>" << endl;
   out << "<title>" << m_title << "</title>" << endl;
   out << "</head><body>" << endl;
   return out;
}

// PRE: ReadStyle has been called
// POST: None
// RETURNS: ostream that was written to
ostream& WebCreator::OutputStyles(ostream &out)
{
   // output opening tag for style
   out << "<style type='text/css'>" << endl;

   // write out all of the style elements
   for (int i = 0; i < m_styleList.size(); ++i)
      out << m_styleList.at(i);

   // close the style tag
   out << "</style>" << endl;
   return out;
}

// PRE: ReadPage has been called
// POST: None
// RETURNS: ostream that was written to
ostream& WebCreator::OutputElements(ostream &out)
{
   // write all of the elements to file
   for (int i = 0; i < m_elementList.size(); ++i)
      out << *m_elementList.at(i);

   return out;
}

// PRE: None
// POST: None
// RETURNS: ostream that was written to
ostream& WebCreator::OutputFooter(ostream &out)
{
   // write out the footer
   out << endl;
   out << "</body></html>" << endl;
   return out;
}

// PRE: None
// POST: None
// RETURNS: None
WebCreator::~WebCreator()
{
   // delete all of the elements
   for (int i = 0; i < m_elementList.size(); ++i)
   {
      delete m_elementList.at(i);
   }
}

// PRE: None
// POST: None
// RETURNS: None
void WebCreator::ConvertToHtml(const string &stylePath, const string &pagePath, const string &outputPath)
{
   // Read the style file
   ReadStyle(stylePath);
   // Read the page file
   ReadPage(pagePath);
   // Write the page out
   BuildPage(outputPath);
}
