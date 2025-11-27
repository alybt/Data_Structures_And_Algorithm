#include <iostream>
#include <stack>

using namespace std;


void viewParkingLot(stack<int> s) {
    if (s.empty()) {
        cout << "Stack Elements (Top to Bottom): [Empty]" << endl;
        return;
    }

    cout << "Stack Elements (Top -> Bottom): [";
    bool first = true;
    while (!s.empty()) {
        if (!first) {
            cout << ", ";
        }
        cout << s.top();
        s.pop(); 
        first = false;
    }
    cout << "]" << endl;
}



void checkIn(stack<int>& s, int val) {
        s.push(val);
}


void checkOutLIFO(stack<int>& s) {
    if (!s.empty()) {
       
        int removed_value = s.top();
        s.pop();
    } else {
        cout << "There's no car to remove'" << endl;
    }
}

stack<int> checkOut(stack<int> s, int value) {
   	stack<int> num;
   
    while(!s.empty()){
    	if(s.top() == value){
    		s.pop();
		} else {
			int val = s.top();
			num.push(val);
			s.pop();
		}
    	
	}
	s = num;
	
	stack<int> num2;
	while(!s.empty()){
    	if(s.top() == value){
    		s.pop();
		} else {
			int val = s.top();
			num2.push(val);
			s.pop();
		}
    	
	}
	
	s = num2;
	
	return s;
}



int main(){

	stack<int> numbers;
	
	int choice, num;
	char exit = 'N';

	while(exit == 'N'){
		cout << "Parking Space: " << endl;
		cout << "1. Park A Car" << endl;
		cout << "2. Remove THY Car" << endl;
		cout << "3. View Parking Lot" << endl;
		cout << "4. Exit" << endl;
		cin >> choice;
		
		switch(choice){
			case 1:{
				cout << "3 digits that represent the car: ";
				cin >> num;
				checkIn(numbers,num);
				break;
			} 
			case 2:{
				cout << "What car do you want to check Out? ";
				cin >> num;
				numbers = checkOut(numbers, num);
//				checkOutLIFO(numbers);
				break;				
			}
			case 3:{
				viewParkingLot(numbers);
				break;
			}
			case 4:{
				cout << "Do you want to exit? [Y/N]" << endl;
				cin >> exit;
				break;
			} case 5: {
				
			}
				
			default:{
				break;
			}
		}
		
		
		
	}
	
	
}


































