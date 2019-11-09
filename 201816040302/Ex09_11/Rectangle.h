// Ex09_11: Rectangle.h
#include <string> // program uses C++ standard string class
using namespace std;

// Rectangle class definition
class Rectangle
{
public:
   // constructor initializes course name and instructor name
   Rectangle( double  , double  );
   void setLength( double ); // function to set the course name
   double getLength(); // function to retrieve the course name
   void setWidth( double );
   double getWidth();
   void displayMessage();
private:
   double length;
   double width;
}; // end class Rectangle
