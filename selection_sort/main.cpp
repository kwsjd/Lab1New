#include <iostream>
using namespace std;
template <class T>
void SelectionSort(T* arr,int n){
    int min;
    for (int i = 0; i < n - 1; i++) {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] <
                arr[min])             // непосредственно сама сортировка выбором.
                min = j;              // находим наименьший элемент в массиве и меняем его местами с элементом на первой позиции.
        if (min !=
            i) {                 // Затем мы ищем следующий наименьший элемент и поменяем его местами с элементом на второй позиции.
            int mid = arr[min];
            arr[min]=arr[i];
            arr[i]=mid;// Повторяем пока у нас не закончатся элементы.
        }
    }
}
int main() {
    float arr[10] = {-3456, 2545, 3, 26, 86, 5, 32, 44, 44, 8};
    int n = 10;
    cout << "unsorted array" << endl;
    for (int i = 0; i < 10; i++) {// появляется массив, сначала выводим его в несортированном виде
        cout << arr[i] << " ";

    }
    SelectionSort(arr,n);
    cout << endl << "sorted array" << endl;  // выводим сортированный массив
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
}