#include <iostream>

using namespace std;

template<class T>
void InsertionSort(T *arr) {
    for (int i = 0; i < 10; i++) {      // сама сортировка вставками.
        int a = arr[i];                 // Предполагаем, что первый элемент массива отсортирован. Затем, на каждом шаге алгоритма выбираем один из элементов массива
        int j = i -
                1;                  //вставляем его на нужную позицию в уже отсортированной части массива, пока все числа не будут на своих местах
        while (j >= 0 && arr[j] > a) {
            arr[j + 1] = arr[j];
            arr[j] = a;
            j--;
        }
    }
}

int main() {
    int arr[10] = {-3456, 2545, 3, 26, 86, 5, 32, 44, 44, 8};
    cout << "unsorted array" << endl;
    for (int i = 0; i < 10; i++) {// появляется массив, сначала выводим его в несортированном виде
        cout << arr[i] << " ";
    }
    InsertionSort(arr);
    cout << endl << "sorted array" << endl;  // выводим сортированный массив
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}