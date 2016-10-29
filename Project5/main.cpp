#include <string>
#include <iostream>

#include "webcreator.h"

using namespace std;

int main()
{
   string stylePath("");
   string pagePath("");
   string outputPath("");
   string pageTitle("");

   // get the style file
   cout << "Path to style file: ";
   cin >> stylePath;

   // get the page file
   cout << "Path to page file: ";
   cin >> pagePath;

   // get the output file
   cout << "Path to output file: ";
   cin >> outputPath;

   // get the page title
   cout << "Page title: ";
   cin >> pageTitle;

   // generate the page
   WebCreator webCreator(pageTitle);
   webCreator.ConvertToHtml(stylePath, pagePath, outputPath);
   return 0;
}
