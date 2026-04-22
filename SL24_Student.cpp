#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Student{
	private:
//	public:
		int id;
		string name;
		int age;
		float grade;
	public:
		//Default constructor
		Student(){
			id=0;
			name="SV FPT";
			age=18;
			grade=-1;
		}
		//Argument constructor
		Student(int id, string _name, int _age, float _grade){
			this->id=id;
			name=_name;
			this->age=_age;
			this->grade=_grade;
		}
		
//		//Deconstructor
//		~Student(){	
//			cout<<"Deconstructor is called."<<endl;
//		}
		int getId() const{
			return id;
		}
		
		void setId(int newId){
			this->id=newId;
		}
		
		string getName() const{
			return this->name;
		}
		
		void setName(const string &newName){
			this->name=newName;
		}
		
		int getAge() const{
			return this->age;
		}
		
		void setAge(int newAge){
			if (newAge>0 && newAge <=150)
				this->age=newAge;
			else
				cout<<"Invalid age."<<endl;	
		}
		
		float getGrade() const{
			return this->grade;
		}
		
		void setGrade(float newGrade){
			this->grade=newGrade;
		}
		
		void display() const {
			cout<<left<<setw(5)<<id
					  <<setw(25)<<name
					  <<setw(5)<<age
				<<right<<setw(7)<<grade<<endl;
		}

		void display2() const {
			cout<<"("<<id<<", "<<name<<", "<<age<<", "<<grade<<")"<<endl;
		}		
		void input(){
			cout<<"Id: "; cin>>id; 
			cin.ignore(); 		//Clear buffer
			cout<<"Name: "; getline(cin, name);
			cout<<"Age: "; cin>>age;
			cout<<"Grade: "; cin>>grade;
			cin.ignore(); 		//Clear buffer
		}
			
};

class StudentManagement{
	public:
		vector<Student> stdList;
		StudentManagement(){};
		
		void editName(Student &sv, string &xName){
			sv.setName(xName);
		}
		void title(){
			cout<<left<<setw(5)<<"ID"
					  <<setw(25)<<"Name"
					  <<setw(5)<<"Age"
				<<right<<setw(7)<<"Grade"<<endl;
//			cout << string(42, '-') << endl;	
			cout<<left<<setw(5)<<"--"
					  <<setw(25)<<"----"
					  <<setw(5)<<"---"
				<<right<<setw(7)<<"-----"<<endl;
		}	
			
//		void addNewStudent(){
//			Student *sv = new Student();
//			sv->input();
//			stdList.push_back(sv);			
//		}

		void addNewStudent(){
			Student sv;
			sv.input();
			stdList.push_back(sv);			
		}		
		void displayStdList(){
			title();
			for (const auto &sv : stdList){
				sv.display();
			}
		}
};

int main(){
//Working in stack memory
	Student sv1;
	sv1.display();
	StudentManagement sm;
	int n;
	cout<<"Input number of student: "; cin>>n;
	for (int i=0; i<n; i++)
		sm.addNewStudent();
	sm.displayStdList();
	
	return 0;
}