#include <iostream>
using namespace std;


int init_arr(double** arr)
{
	int size;
	cout << "size: ";
	cin >> size;

	if (size <= 0)
	{
		cout << "error" << endl;
		exit(0);
	}

	*arr = new double[size];

	return size;
}

void fill_arr(double* arr, int size)
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

void print_arr(double* arr, int size)
{
	cout << "array: { " << arr[0];
	for (int i = 1; i < size; i++)
		cout << " " << arr[i];
	cout << " }" << endl;
}

void delete_arr(double* arr)
{
	delete[] arr;
	arr = 0;
}

int main()
{
	double* arr = 0;

	char answer;
	do
	{
		int size = init_arr(&arr);
		fill_arr(arr, size);
		print_arr(arr, size);
		delete_arr(arr);

		do
		{
			cout << "new array?" << endl << "y - yes, n - no: ";
			cin >> answer;
		} while (answer != 'y' && answer != 'n');

	} while (answer == 'y');
	return 0;
}