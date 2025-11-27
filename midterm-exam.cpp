#include <iostream>
#include <array>

using namespace std;

int addInQueue(int arr[], int size, int num){
    size++;
    num++;
    arr[size] = num;


    return arr[size];
}

int addInWindow(int arr[], int size){
    int window =0;
    window = arr[0];

    return window;
}

int removeFromArr(int arr[], int size){
    for (int i = 0; i < size-1; i++){
        arr[i] = arr[i+1];

    }
    return arr[size-1];
}

void viewQueue(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}



int main(){
    char exit;
    exit = 'Y';
    int choice;
    int size = 0, num = 0;
    int arr[20] = {};
    int window1, window2, window3;

    do{
        cout << "\n---Main Menu---" << endl;
        cout << "[1] Add Queue"<< endl;
        cout << "[2] View Window 1"<< endl;
        cout << "[3] View Window 2"<< endl;
        cout << "[4] View Window 3"<< endl;
        cout << "[5] Open Window 1"<< endl;
        cout << "[6] Open Window 2"<< endl;
        cout << "[7] Open Window 3"<< endl;
        cout << "[8] View Queue"<< endl;
        cout << "[9] Exit" << endl;
        cin >> choice;

        switch (choice){
            case 1:
                arr[size] = addInQueue(arr,size,num);
                size++;
                num++;
                break;
            case 2:
                if (window1 > 0){
                    cout << "Occupied: "<< window1 << endl;  
                }
                
                break;
            case 3:
                if (window2 > 0){
                    cout << "Occupied: "<< window2 << endl;  
                }
                break;
            case 4:
                if (window3 > 0){
                    cout << "Occupied: "<< window3 << endl;  
                }
                break;
            case 5:
                window1 = addInWindow(arr,size);
                arr[size] = removeFromArr(arr,size);
                size--;
                break;
            case 6:
                window2 = addInWindow(arr,size);
                arr[size] = removeFromArr(arr,size);
                size--;
                break;
            case 7:
                window3 = addInWindow(arr,size);
                arr[size] = removeFromArr(arr,size);
                size--;

                break;
            case 8:
                viewQueue(arr,size);
            break;

            default:
                cout << "No";
                break;

        }
    } while (exit !='N'|| exit !='n');




    return 0;
}
