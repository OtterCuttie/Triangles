
#include <iostream>
#include <string>
using namespace std;
//int n;
//int k = 1;
//int i = 2;
//int pressF(int i, int n, int k) {
//	if (1 == n) {
//		return 0;
//	}
//	else if (n) {
//		return 0;
//	}
//	else if (i < n and i != n) {
//		pressF(i * 2, n, k + 1);
//	}
//	else if (i == n) {
//		return k;
//	}
//	else return 99;
//}
//int main()
//{
//	cin >> n;
//	cout<<pressF(i,n,k);
//}
struct Tree
{
	int age=NULL;
	string name;
	struct Tree* left=NULL, * right=NULL;

};
Tree* addPerson(int age, string name, struct Tree *person) {
	if (person == NULL) {
		person = new Tree;//выделяем память для нового персон
		person->age = age;
		person->name = name;
		person->left = NULL;
		person->right = NULL;
	}
	else {
		if (age < person->age) {
			person->left = addPerson(age, name, person->left);
		}
		else {
			person->right = addPerson(age, name, person->right);
		}
	}
	return person;
};
void treePrint(Tree* person) {
	if (person != NULL) {
		cout << person->age << " " << person->name << endl;
		treePrint(person->left);//Рекурсивная функция для левого поддерева
		treePrint(person->right);//Рекурсивная функция для правого поддерева
	}
}

int main() {
	struct Tree* my=NULL;
	my = addPerson(16, "Rita",my);
	my = addPerson(51, "Marina", my);
	my = addPerson(55, "Kirill", my);
	treePrint(my);
	return 0;
}
