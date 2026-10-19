# include <iostream>
using namespace std;
class Student{
	private:
		string student_name;
		int adm_number;
		double fee_balance;
		
		public:
		void inputStudentData(){ 
		cout << "Enter student name:"<<endl; 
		cin>>student_name; 
		cout<<"Enter admission number:"<<endl; 
		cin>>adm_number; 
		cout<<"Enter fee balance:"<<endl; 
		cin>>fee_balance; 
		}
		
		void makePayment() { double payment; 
		cout << "Enter payment amount:"<<endl; 
		cin>>payment; 
		if (payment > 0 && payment <= fee_balance) { 
		fee_balance = fee_balance - payment; 
		cout<<"Payment successful:"<<endl; 
		} 
		else { 
		cout<<"Invalid payment amount:"<<endl; 
		} 
		}
		
		void displayStatus() { 
		cout<<"--- Student Fee Status ---:"<<endl; 
		cout<<"Student Name:"<<student_name<<endl; 
		cout<<"Admission Number:"<<adm_number<<endl; 
		cout<<"Remaining Fee Balance:"<<fee_balance<<endl; 
		} 
		}; 
		int main() {
		 Student student1; 
		 student1.inputStudentData(); 
		 student1.makePayment(); 
		 student1.displayStatus();
		 return 0; 
		}
