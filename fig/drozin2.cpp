#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 2.0*acos(0.0);

void printCircleParams(double radius)
{
   double perimeter = 2*PI*radius;
   double area = PI*radius*radius;
   cout << "Периметр круга: " << perimeter << endl;
   cout << "Площадь круга: " << area << endl;
}

void printEllipseParams(double a, double b)
{
    double perimeter = 2*PI*(sqrt(a*a+b*b)/2);
    double area = PI*a*b;
    cout << "Периметр эллипса: " << perimeter << endl;
    cout << "Площадь эллипса: " << area << endl;
}

void printRectParams(double a, double b)
{
    double perimeter = 2*(a+b);
    double area = a*b;
    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Площадь круга: " << area << endl;
}

void printTetrahedronParams(double l)
{
   double lateralArea = sqrt(3)*l*l;
   double volume = (sqrt(2)/12) * l;
   cout << "Площадь поверхности тетраэдра: " << lateralArea << endl;
   cout << "Объем тетраэдра: " << volume << endl;
}

void printConeParams(double h, double r)
{
   double lateralArea = PI*r*sqrt(r*r+h*h);
   double volume = (1/3.0)*PI*r*r*h;
   cout << "Площадь поверхности конуса: " << lateralArea << endl;
   cout << "Объем конуса: " << volume << endl;
}

void printCubeParams(double l)
{
   double lateralArea = 6*l*l;
   double volume = l*l*l;
   cout << "Площадь поверхности куба: " << lateralArea << endl;
   cout << "Объем куба: " << volume << endl;
}

void printPrismParams(double l, double h)
{
   double lateralArea = 3*l*l*sqrt(3)+2*h;
   double volume = ((3*l*l)/2.0) * h*sqrt(3);
   cout << "Площадь поверхности призмы: " << lateralArea << endl;
   cout << "Объем призмы: " << volume << endl;
}

void printCylinderParams(double r, double h)
{
   double lateralArea = 2*PI*r*(r+h);
   double volume = PI*r*r*h;
   cout << "Площадь поверхности цилиндра: " << lateralArea << endl;
   cout << "Объем цилиндра: " << volume << endl;
}

void printEllipsoidParams(double a, double b, double c)
{
   double p = 1.6075;
   double lateralArea = 4*PI*pow((pow(a,p)*pow(b,p)+pow(a,p)*pow(c,p)+pow(b,p)*pow(c,p))/3.0, 1.0/p);
   double volume = (4/3.0)*PI*a*b*c;
   cout << "Площадь поверхности эллипсоида: " << lateralArea << endl;
   cout << "Объем эллипсоида: " << volume << endl;
}

void printParams()
{
    string shapeName;
    cout << "Введите название фигуры: " << endl;
    cin >> shapeName;

    if(shapeName == "circle")
    {
        double r;
        cout << "Введите радиус круга: ";
        cin >> r;
        printCircleParams(r);
    }
    else if(shapeName == "ellipse")
    {
        double a, b;
        cout << "Введите полуоси эллипса: ";
        cin >> a >> b;
        printEllipseParams(a, b);
    }
    else if(shapeName == "rectangle")
    {
        double a, b;
        cout << "Введите размеры прямоугольника: ";
        cin >> a >> b;
        printRectParams(a, b);
    }
    else if(shapeName == "tetrahedron")
    {
        double l;
        cout << "Введите длину ребра тетраэдра: ";
        cin >> l;
        printTetrahedronParams(l);
    }
    else if(shapeName == "cone")
    {
        double h, r;
        cout << "Введите высоту и радиус основания конуса: ";
        cin >> h >> r;
        printConeParams(h, r);
    }
    else if(shapeName == "cube")
    {
        double l;
        cout << "Введите длину ребра куба: ";
        cin >> l;
        printCubeParams(l);
    }
    else if(shapeName == "prism")
    {
        double l, h;
        cout << "Введите длину ребра и высоту призмы: ";
        cin >> l >> h;
        printPrismParams(l, h);
    }
    else if(shapeName == "cylinder")
    {
        double r, l;
        cout << "Введите высоту и радиус основания цилиндра: ";
        cin >> r >> l;
        printPrismParams(r, l);
    }
    else if(shapeName == "ellipsoid")
    {
        double a, b, c;
        cout << "Введите длины ребер эллипса: ";
        cin >> a >> b >> c;
        printEllipsoidParams(a, b, c);
    }
}

int main()
{

    printParams();
    return 0;
}
