﻿#include <iostream>
#include <array>
using namespace std;
// 6 В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной диагонали
//int main() {
//	array<array <int, 4>, 4> mat;
//
//	for (int i = 0; i < 4; ++i) {
//		for (int j = 0; j < 4; ++j)
//			mat[i][j] = rand() % 100 - 50;
//	}
//	for (int i = 0; i < 4; ++i) {
//		for (int j = 0; j < 4; ++j)
//			cout << mat[i][j] << " ";
//		cout << endl;
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (j == i && mat[i][j] < 0) {
//				sum += mat[i][j];
//				}
//			}
//		}
//		cout << sum;
//	}
//}
//// 8. Дана матрица. Элементы первой строки - мощность электромотора, второй строки - категория матора(от 1 до 3). Найти самый мощный двигатель категории 3.
// int main() { 
//    array<array<int, 10>, 2> mat;
//    array<int, 10> max;
//    for (int i = 0; i < 1; i++) {
//        for (int j = 0; j < 10; j++)
//            mat[i][j] = rand() % 100 + 20;
//    }
//    for (int i = 1; i < 2; i++) {
//        for (int j = 0; j < 10; j++)
//            mat[i][j] = rand() % 3 + 1;
//    }
//    for (int j = 0; j < 10; j++) {
//        for (int i = 0; i < 2; i++)
//            cout << mat[i][j] << ' ';
//        cout << endl;
//    }
//    cout << endl;
//    for (int i = 0; i < 10; i++)
//        max[i] = 0;
//    for (int j = 0; j < 10; j++)
//        if (mat[1][j] == 3)
//            max[j] = mat[0][j];
//    int MAX = 0;
//    for (int i = 0; i < max.size(); i++) {
//        if (max[i] > MAX)
//            MAX = max[i];
//    }
//    cout << MAX << endl;
// 9b.  Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.
/*int main(){
    int size;
    cout<<"Vvedite kolichestvo robotov: ";
    cin>>size;
    double** matr=new double* [2];
    for(int i=0;i<2;i++)
        matr[i]=new double[size];
    for(int i=0;i<size;i++){
        cout<<"Vvedite zaryd "<<i+1<<" robota: ";
        cin>>matr[0][i];
        cout<<"Vvedite skorost "<<i+1<<" robota: ";
        cin>>matr[1][i];}
    for(int i=0;i<2;i++){
        for(int j=0;j<size;j++)
            cout<<matr[i][j]<<' ';
    cout<<endl;}
    for(int i=0;i<2;i++)
        delete[] matr[i];
    delete[] matr;
    return 0;
}*/
//5 В квадратной матрице для каждой строки найти минимальный элемент и переставить его с элементом, стоящим в этой строке на главной диагонали.
int main() {
	array<array <int, 4>, 4> mat;
    int i, j;
    int min = INT_MAX, index;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j)
			mat[i][j] = rand() % 100 - 50;
	}
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (mat[i][j] < min)
            {
                min = mat[i][j];
                index = j;
            }
        }

        int t = mat[i][i];
        mat[i][i] = mat[i][index];
        mat[i][index] = t;
        min = INT_MAX;
    }
    cout << "Result:" << endl;
    for (int i = 0; i < 4; i++)
    {  for (int j = 0; j < 4; j++) std::cout << mat[i][j] << " ";
        std::cout << std::endl;
    }
            
} 




		
				

				
		
		








// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.