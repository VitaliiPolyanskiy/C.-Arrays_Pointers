#include <iostream>
using namespace std;

int main()
{
	int * ptr;
	const int size = 5;
	int ar[size] = { 1, 2, 3, 4, 5 };
	ptr = ar; // присваивание адреса массива указателю 
	for (int i = 0; i < size; i++)
	{
		cout << *ptr << '\t';
		ptr++; // перемещение указателя на следующий элемент массива
	}
	cout << endl;
	// присваивание адреса четвертого элемента указателю
	ptr = ar + 4; // ptr = &ar[4];
	for (int i = 0; i < size; i++)
	{
		cin >> *ptr;
		ptr--; // перемещение указателя на предыдущий элемент массива
	}
	for (int i = 0; i < size; i++)
	{
		ptr++; // перемещение указателя на следующий элемент массива
		cout << *ptr << '\t';
	}
	cout << endl;

	// по отношению к указателям можно применять  синтаксис массивов и наоборот
	ptr = ar;
	for (int i = 0; i<size; i++)
	{
		cout << ptr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i<size; i++)
	{
		cin >> *(ar + i);

	}	
	for (int i = 0; i<size; i++)
	{
		cout << *(ar + i) << '\t';
	}
	cout << endl;
	//for (int i = 0; i<size; i++)
	//{
	//	cout << *ar;
	//	// Ошибка на этапе компиляции, так как ar - константный указатель
	//	ar++;
	//}

	ptr = &ar[4];
	cout << "The distance between the first and the fourth element of the array: "
		<< ptr - ar << " elements" << endl;
	cout << "The distance between the first and the fourth element of the array: "
		<< (ptr - ar)*sizeof(int) << " bytes" << endl;
	cout << "Size of the array: " << sizeof(ar) << endl;

	int * p = ar;
	while (true)
	{
		cout << p[0] << '\t';
		if (p == ptr)
			break;
		p++;
	}

	return 0;
}














