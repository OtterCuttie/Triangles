#include <iostream>
#include <algorithm>
using namespace std;

// Разделение по схеме Lomuto
int partition(int a[], int start, int end)
{
    // Выбираем крайний правый элемент в качестве опорного элемента массива
    int pivot = a[end];

    // элементы, меньшие точки поворота, будут перемещены влево от `pIndex`
    // элементы больше, чем точка поворота, будут сдвинуты вправо от `pIndex`
    // равные элементы могут идти в любом направлении
    int pIndex = start;

    // каждый раз, когда мы находим элемент, меньший или равный опорному, `pIndex`
    // увеличивается, и этот элемент будет помещен перед опорной точкой.
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }

    // поменять местами `pIndex` с пивотом
    swap(a[pIndex], a[end]);

    // вернуть `pIndex` (индекс опорного элемента)
    return pIndex;
}

// Процедура быстрой сортировки
void quicksort(int a[], int start, int end)
{
    // базовое условие
    if (start >= end) {
        return;
    }

    // переставить элементы по оси
    int pivot = partition(a, start, end);

    // повторяем подмассив, содержащий элементы, меньшие опорной точки
    quicksort(a, start, pivot - 1);

    // повторяем подмассив, содержащий элементы, превышающие точку опоры
    quicksort(a, pivot + 1, end);
}

// C++ реализация алгоритма быстрой сортировки
int main()
{

    int a[] = { 7, -3, 9, 2, 6, 34, -6, 0, 1 };
   /* int r;
    cin >> r;
    int* a = new int[r];*/
    int n = sizeof(a) / sizeof(a[0]);
   /* for (int i = 0; i < n; i++) {
        cin >> a[i];
    }*/

    quicksort(a, 0, n - 1);

    // печатаем отсортированный массив
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
