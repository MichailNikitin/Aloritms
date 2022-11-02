#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 2.0*acos(0.0);

void printCircleParams()
{
	double r;
	cout << "������� ������ �����: ";
	cin >> r;
		
   double perimeter = 2*PI*radius;
   double area = PI*radius*radius;
   cout << "�������� �����: " << perimeter << endl;
   cout << "������� �����: " << area << endl;
}

void printEllipseParams()
{
	double a, b;
	cout << "������� ������� �������: ";
	cin >> a >> b;
		
    double perimeter = 2*PI*(sqrt(a*a+b*b)/2);
    double area = PI*a*b;
    cout << "�������� �������: " << perimeter << endl;
    cout << "������� �������: " << area << endl;
}

void printRectParams()
{
	double a, b;
	cout << "������� ������� ��������������: ";
	cin >> a >> b;
		
    double perimeter = 2*(a+b);
    double area = a*b;
    cout << "�������� ��������������: " << perimeter << endl;
    cout << "������� �����: " << area << endl;
}

void printTetrahedronParams()
{
	double l;
	cout << "������� ����� ����� ���������: ";
	cin >> l;
		
	double lateralArea = sqrt(3)*l*l;
	double volume = (sqrt(2)/12) * l;
	cout << "������� ����������� ���������: " << lateralArea << endl;
	cout << "����� ���������: " << volume << endl;
}

void printConeParams()
{
	double h, r;
	cout << "������� ������ � ������ ��������� ������: ";
	cin >> h >> r;
		
   double lateralArea = PI*r*sqrt(r*r+h*h);
   double volume = (1/3.0)*PI*r*r*h;
   cout << "������� ����������� ������: " << lateralArea << endl;
   cout << "����� ������: " << volume << endl;
}

void printCubeParams()
{
	double l;
	cout << "������� ����� ����� ����: ";
	cin >> l;
		
   double lateralArea = 6*l*l;
   double volume = l*l*l;
   cout << "������� ����������� ����: " << lateralArea << endl;
   cout << "����� ����: " << volume << endl;
}

void printPrismParams()
{
	double l, h;
	cout << "������� ����� ����� � ������ ������: ";
	cin >> l >> h;
		
   double lateralArea = 3*l*l*sqrt(3)+2*h;
   double volume = ((3*l*l)/2.0) * h*sqrt(3);
   cout << "������� ����������� ������: " << lateralArea << endl;
   cout << "����� ������: " << volume << endl;
}

void printCylinderParams()
{
	double r, l;
	cout << "������� ������ � ������ ��������� ��������: ";
	cin >> r >> l;
		
   double lateralArea = 2*PI*r*(r+h);
   double volume = PI*r*r*h;
   cout << "������� ����������� ��������: " << lateralArea << endl;
   cout << "����� ��������: " << volume << endl;
}

void printEllipsoidParams()
{
	double a, b, c;
	cout << "������� ����� ����� �������: ";
	cin >> a >> b >> c;
		
   double p = 1.6075;
   double lateralArea = 4*PI*pow((pow(a,p)*pow(b,p)+pow(a,p)*pow(c,p)+pow(b,p)*pow(c,p))/3.0, 1.0/p);
   double volume = (4/3.0)*PI*a*b*c;
   cout << "������� ����������� ����������: " << lateralArea << endl;
   cout << "����� ����������: " << volume << endl;
}

void printParams()
{
    string shapeName;
    cout << "������� �������� ������: " << endl;
    cin >> shapeName;

    if(shapeName == "circle") printCircleParams();
    else if(shapeName == "ellipse") printEllipseParams();
    else if(shapeName == "rectangle") printRectParams();
    else if(shapeName == "tetrahedron") printTetrahedronParams();
    else if(shapeName == "cone") printConeParams();
    else if(shapeName == "cube") printCubeParams();
    else if(shapeName == "prism") printPrismParams();
    else if(shapeName == "cylinder") printPrismParams();
    else if(shapeName == "ellipsoid") printEllipsoidParams();
	else cout << "������������ �������� ������" << endl;
}

int main()
{
    printParams();
    return 0;
}
