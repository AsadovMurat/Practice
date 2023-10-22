using namespace std;

bool bool_info(int a, int b, int c) {
	if (a < 0 || b < 0 || c < 0)  return false;
	if (a > 0 || b > 0 || c > 0)  return false;
	else return true;
}

int main() {
	vector <char> line(1);
	char a;
	string sym = "";

	for (int i = 0; line.back() != '!'; i++) { //Записываем текст
		cin >> a;
		line.push_back(a);
	}
	int count_1 = 0, count_2 = 0, count_3 = 0;
	for (int i = 0; i < line.size(); i++) {//Читаем текст

		if (line[i] == '(') {
			count_1 += 1;
			sym.push_back(')');
		}
		if (line[i] == ')') {
			if (sym.back() != line[i]) {
				count_1 = -1;
				break;
			}
			else {
				count_1 -= 1;
				sym.pop_back();
			}
		}
			if (line[i] == '{') {
				count_2 += 1;
				sym.push_back('}');
			}
			if (line[i] == '}') { 
				if (sym.back() != line[i]) {
					count_1 = -1;
					break;
				}
				else {
					count_2 -= 1;
					sym.pop_back();
				}
			}

			if (line[i] == '[') {
				count_3 += 1;
				sym.push_back(']');
			}
			if (line[i] == ']') {
				if (sym.back() != line[i]) {
					count_1 = -1;
					break;
				}
				else {
					count_3 -= 1;
					sym.pop_back();
				}
			}

		if (count_1 == -1 || count_2 == -1 || count_3 == -1) //Проверяем скобки на их порядок ввода
		{													 //Если ) или ] или } появляются первыми, то порядок нарушается
			count_1 = -1;									 // и нужно выводить false с помощью переменных и функции
			break;
		}

	}
	std::cout << (bool_info(count_1, count_2, count_3) ? "YES" : "NO") << std::endl; //Проверяем на true или false и выводим текст

	return 0;
}