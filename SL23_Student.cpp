#include <iostream>
#include <string>
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
		Student(int _id, string _name, int _age, float _grade){
			this->id=_id;
			this->name=_name;
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
		
		void setName(string newName){
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
		
		void display(){
			cout<<"("<<id<<", "<<name<<", "<<age<<", "<<grade<<")"<<endl;
		}
		
			
};

class StudentManagement{
	public:
		StudentManagement(){};
		void editName(Student &sv, string xName){
			sv.setName(xName);
		}
	
};

int main(){
//Working in stack memory
	Student sv1;
	sv1.display();
	
	sv1.setId(1);
	sv1.setName("Vu Van Huy");
	sv1.setAge(18);
	sv1.setGrade(8.5);
	sv1.display();
	
	Student sv2(2,"Nguyen Minh Tuan", 21, 7);
	sv2.display();
	
	StudentManagement sm;
	sm.editName(sv1, "Tran Quang Huy");
	sv1.setAge(200);
	sv1.display();
	
	return 0;
}

//int main(){
//	//Working in heap memory
//	Student *sv1 = new Student();
//	sv1->display();
//	
//	sv1->setId(1); sv1->setName("Vu Van Huy");
//	sv1->display();
//	
//	Student *sv2 = new Student(2,"Nguyen Minh Tuan", 21, 7);
//	sv2->display();
//	
//	delete sv1;
//	delete sv2;
//	return 0;
//}
