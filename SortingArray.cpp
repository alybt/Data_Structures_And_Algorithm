#include <iostream>


using namespace std;


void display(int arr[], int num){
	
	for (int i = 0; i < num; i++){
			cout << arr[i] << " ";
		}
}

void insertData(int arr[],int num){
	for(int i=0; i < num; i++){
			
			cout << "Enter number " << i+1 << ": ";
			cin >> arr[i];
	}
}

int segreAndSort(int arr[], int num){
	for(int i=0; i < num; i++){
		for(int j=0; j < num -1; j++){
			int temp;
			if (arr[j] < arr[j+1]){
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j] = temp;
			}
			
		}
	}
	
	int even[num], odd[num];
	int e = 0; int o = 0;
	for(int i=0; i < num; i++){
		if (arr[i] % 2==0){
			even[e] = arr[i];
			e++;
		} else {
			odd[o] = arr[i];
			o++;
		}
	}
	e= e; o = o;
	int temp = 0;
	for (int i = 0; i < num; i++){
		
		if (i < o){
			arr[i] = odd[i];
		} else {
			arr[i] = even[temp];
			temp++;
		}
		
	}
	

	return arr[num];
}


int main(){
	int num;
	char choice;
	
	do{
		cout << "Enter how many numbers: ";
		cin >> num;
		int arr[num];
		
		cout << endl;
		cout << "Insert Data" << endl;
		insertData(arr, num);
		arr[num]= arr[num];
		
		cout << "Original array:";
		display(arr, num);
		
		cout << endl;
		cout << "Array After Segregation and Sorting: " << endl;
		segreAndSort(arr, num);
		display(arr, num);
		cout << endl;
		cout << "Do you wanna repeat? [Y/N]:  ";
		cin >> choice;
		
	} while (choice == 'Y' || choice == 'y');
		
	return 0;
	}
	
	
//	
//	int even[num], odd[num];
//	int e, o;
//	for(int i=0; i < num; i++){
//		if (arr[i] % 2==0){
//			even[e]= arr[i];
//			e++;
//		} else {
//			odd[o] = arr[i];
//			o++;
//		}
//	}
//	o= o; 
//	e = e;
//	even[num] = even[num];
//	odd[num] = odd[num];
//	
//	for (int i = 0; i < e; i++){
//			cout << endl;
//			cout << even[i] << " ";
//	}
//	
//	for (int i = 0; i < num; i++){
//		int temp = 1;
//		if (i > o -1){
//			arr[i] = odd[i];
//		} else {
//			arr[i] = even[temp];
//			temp++;
//		}
//		
//	}
//	
//	for (int i = 0; i < num; i++){
//			cout << endl;
//			cout << arr[i] << " ";
//		}
//
//
//

//cout << "Enter how many numbers";
//		cin >> num;
//		int arr[num];
//		
//		cout << endl;
//		cout << "Insert Data" << endl;
//		insertData(arr, num);
//		arr[num]= arr[num];
//		
//		cout << "Original array:";
//		display(arr, num);
//		
//		cout << endl;
//		cout << "Array After Segregation and Sorting: " << endl;
//		segreAndSort(arr, num);
//		display(arr, num);



