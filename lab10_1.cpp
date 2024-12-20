#include<iostream>
#include<string>
using namespace std;

int main(){
	string grade;
	int count[5] = {};
	int total_students; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << total_students + 1 << "]: " ;
		cin >> grade; //The loop must be terminated when grade = '0'
		
		
		if(grade == "0"){ // if grade is A
			break;//Do something
		}else if(grade == "A"){
			count[0]++;
			total_students++; 
		}else if(grade == "B"){
			count[1]++;
			total_students++;
		}else if(grade == "C"){
			count[2]++;
			total_students++;
		}else if(grade == "D"){
			count[3]++;
			total_students++;
		}else if(grade == "F"){
			count[4]++;
			total_students++;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again." << endl;//Do something
		} 
	}while(true);
	
	
	cout << "In total " << total_students<< " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] <<endl;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}