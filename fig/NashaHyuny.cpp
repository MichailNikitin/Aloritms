#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

const double PI = 2.0*acos(0.0);

string calculateAreaAndVolumeFig(string nameFig, vector<int> &vecParam)
{
   if (nameFig == "circle") return calcCircle(vecParam);
   if (nameFig == "ellipse") return calcEllipse(vecParam);
   if (nameFig == "rectangle") return calcRectangle(vecParam);
   if (nameFig == "cylinder") return calcPrism(vecParam);
   if (nameFig == "cone") return calcCone(vecParam);
   if (nameFig == "tetrahedron") return calcTetrahedron(vecParam);
   if (nameFig == "ellipsoid") return calcEllipsoid(vecParam);
   if (nameFig == "cube") return calcCube(vecParam);
   if (nameFig == "prism") return calcPrism5(vecParam);
   return "������� ����������� ������";
}

string calcCircle(vector<int> &vecParam)()


int main()
{
   string nameFig;
   vector <int> vecParam;
   cout << "����� ���������� � ��������� ��� ���������� ������������� �����. ����� �� ������ ��������� �������� ���: �������, �����, ������;\n"
        "������� ���: �������, �����, ���������, ������, ��������, ����, ������������ ������, ����������; ������� ���: ���������, ������, ��������, ����, ������������ ������, ����������. ��� ���� ����� ��������� ������� �����...";
   cout << "������� �������� ������: " << endl;
   cin >> nameFig;
   cout << "������� ��������� ������:";
   while (cin >> vecParam);

   cout << printParams(nameFig, vecParam);
   return 0;
}