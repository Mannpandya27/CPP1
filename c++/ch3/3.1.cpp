#include<iostream>
using namespace std;

class student 
{
	private:
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string collage;
		
	public:
		void setData(int id,string name,int age,string course,string city,string email,string collage)
		{
			this->id = id;
			this->name = name;
			this->age = age;
			this->course = course;
			this->city = city;
			this->email = email;
			this->collage = collage;
		}
		void getData()
		{
			cout <<"id:\t\t"<<id<<endl
				 <<"name:\t\t"<<name<<endl
				 <<"age:\t\t"<<age<<endl
				 <<"course:\t\t"<<course<<endl
				 <<"city:\t\t"<<city<<endl
				 <<"email:\t\t"<<email<<endl
				 <<"collage:\t"<<collage<<endl;
 		}
};


int main()
{
	student S1,S2,S3,S4,S5;
	
	S1.setData(101,"Ashu",25,"master by flutter","surat","ashutagadiya01@gmail.com","sir kp commerce collage\n------------------------------------------------------------\n");
	S2.setData(102,"Jenish",25,"c language","surat","jenish01@gmail.com","sir kp commerce collage\n------------------------------------------------------------\n");
	S3.setData(103,"Het",25,"c++ language","surat","hetvaghani01@gmail.com","DRB collage\n------------------------------------------------------------\n");
	S4.setData(104,"smit",25,"android","surat","mannn@gmail.com","bhagwan mahavir collage\n------------------------------------------------------------\n");
	S5.setData(105,"deep",25,"ios","surat","vandan01@gmail.com","tapi collage\n------------------------------------------------------------\n");
	S1.getData();
	S2.getData();
	S3.getData();
	S4.getData();
	S5.getData();
}
