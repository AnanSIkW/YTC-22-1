#include <iostream>
#include <string>
#include <regex>
using namespace std;


//
// int main() { //6
//	int counst = 0;
//	string text;
//	getline(cin, text);
//	for (int i = 0; i < text.length(); i++)
//		if (text[i] == ' ')
//			counst++;
//
//	cout << counst + 1;
//}
//int main(){ //15
//	string str ;
//	getline(cin, str);
//	if (str.length() > 10) {
//		str.resize(6);
//		cout << str;
//	}
//	else {
//		str.resize(12, 'o');
//		cout << str;
//	}
//		return 0;
//}
//		
//int main()//10
//{
//    string str = "";
//	  getline(cin, str);
//    str += " ";
//    string res = "", w = "";
//    for (int i = 0; i < str.length(); i++)
//    { if (str[i] == ' ')
//        {
//            res += w.substr(1, w.length() - 1) + " ";
//            w = "";
//        }
//        else
//        {
//            w += str[i];
//        }
//    }
//
//    cout<<res;
//}

using namespace std; //19
int main() {
	string s ;
	getline(cin, s);
	s = regex_replace(s, regex("a"),"ab");
	cout << s;
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