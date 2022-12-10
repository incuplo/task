#include <iostream>
using namespace std;

void sort_arr_first(int* arr, int size_ar);     
void sort_arr_second(int* arr, int size_ar);
void sort_arr_third(int* arr, int size_ar);

int main(){      
    setlocale(0, "");
    int size_arr;
    cout << "Ââåäèòå êîëè÷åñòâî ýëåìåíòîâ:";
    cin >> size_arr;
    int* arr = new int[size_arr];
    for(int i = 0; i < size_arr; i++){
        cin >> arr[i];
    }
    cout << "Ââåä¸ííûé ìàññèâ: ";
    for (int q = 0; q < size_arr; q++){
        cout << arr[q] << " ";   
    }
    cout << endl;
    sort_arr_first(arr, size_arr);
    delete [] arr;
    return 0;
}

void sort_arr_first(int* arr, int size_arr){     

    int temp;
    for (int j = 0; j < size_arr - 1; j++){
        for (int k = 0; k < size_arr - j - 1; k++){
            if (arr[k] > arr[k + 1]){
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    cout << "Îòñîðòèðîâàííûé ìàññèâ: ";
    for (int c = 0; c < size_arr; c++){
        cout << arr[c] << " ";  
    }
    cout << endl;
    sort_arr_second(arr, size_arr);
    delete [] arr;
}

void sort_arr_second(int* arr, int size_arr){    

    if(size_arr % 2 == 0){      
        for(int t = 0; t < size_arr/2; t++){
                arr[t] *= 2;        
        }
        for(int k = size_arr/2; k < size_arr; k++){
                arr[k] *= 1;   
        }
    }
    if(size_arr % 2 == 1){       
        for(int t = 0; t < size_arr/2 + 1; t++){
                arr[t] *= 2;
        }
        for(int k = size_arr/2 + 1; k < size_arr; k++){
                arr[k] *= 1;
        }
    }
    cout << "Îòñîðòèðîâàííûé ìàññèâ â êîòîðîì ïåðâóþ ïîëîâèíó óìíîæèëè íà 2: ";
    for (int kavo = 0; kavo < size_arr; kavo++){
        cout << arr[kavo] << " ";   // âûâîä ìàññèâà
    }
    cout << endl;
    sort_arr_third(arr, size_arr);
    delete [] arr;
}

void sort_arr_third(int* arr, int size_arr){     
    int biba;
    for (int joji = 0; joji < size_arr - 1; joji++){
        for (int kek = 0; kek < size_arr - joji - 1; kek++){
            if (arr[kek] > arr[kek + 1]){
                biba = arr[kek];
                arr[kek] = arr[kek + 1];
                arr[kek + 1] = biba;
            }
        }
    }
    cout << "Ãîòîâûé ìàññèâ: ";
    for (int boba = 0; boba < size_arr; boba++){
        cout << arr[boba] << " ";   
    }
    cout << endl;
    delete [] arr;
}
