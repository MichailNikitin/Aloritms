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
   return "Введена неизвестная фигура";
}

string calcCircle(vector<int> &vecParam)()


int main()
{
   string nameFig;
   vector <int> vecParam;
   cout << "Добро пожаловать в программу для вычисления характеристик фигур. Здесь вы можете вычислить периметр для: эллипса, круга, прямой;\n"
        "площадь для: эллипса, круга, тетраэдра, конуса, цилиндра, куба, пятиконечной призмы, эллипсоида; площадь для: тетраэдра, конуса, цилиндра, куба, пятиконечной призмы, эллипсоида. Для того чтобы вычислить площадь круга...";
   cout << "Введите название фигуры: " << endl;
   cin >> nameFig;
   cout << "Введите параметры фигуры:";
   while (cin >> vecParam);

   cout << printParams(nameFig, vecParam);
   return 0;
}