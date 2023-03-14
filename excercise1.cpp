#include <iostream>
#include <cctype>

using std::string;

class IEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee: IEmployee {
private: 
    string Company;
    int Age;
    bool isValidName(string name){
        int i = 0;
        while(i < name.length()){
            if(isdigit(name[i])){
                return false;
            }
        } return true;
    }
public:
    string Name;
    void setName(string name){//setter
        if(isValidName(name))
        Name = name;
    }
    string getName(){//getter
        return Name;
    }
    void setCompany(string company){
        if(company.length()>2)
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void AskForPromotion(){
        if(Age>30)
            std::cout<<Name<<" got promoted!"<<std::endl;
        else
            std::cout<<Name<<", sorry NO promotion for you!"<<std::endl;
    }       
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void IntroduceYourself(){
        std::cout<<"Name -" << Name <<std::endl;
        std::cout<<"Company -" << Company <<std::endl;
        std::cout<<"Age -" << Age <<std::endl;
    }
    virtual void Work(){
        std::cout<<Name<<" is checking email, task backlog, performing tasks..."<<std::endl;
    }
};

class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string langugage):
    Employee(name,company,age){
        FavProgrammingLanguage = langugage;
    }
    void FixBug(){
        std::cout<<getName()<<" fixed bug using "<<FavProgrammingLanguage<<std::endl;
    }
    void Work(){
        std::cout<<Name<<" is writing "<<FavProgrammingLanguage<<" code"<<std::endl;
    }
};
class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        std::cout<<Name<<" is preparing "<<Subject<<" lesson."<<std::endl;
    }
    Teacher(string name, string company, int age, string subject): Employee(name, company, age){
        Subject = subject;
    }
    void Work(){
        std::cout<<Name<<" is teaching "<<Subject<<std::endl;
    }
};
int main()
{
    Developer dev = Developer("Stoyan","Daimler-Benz",36,"JavaScript");
    Teacher teach = Teacher("Jack","Cool School",35,"History");
    Employee *emp1 = &dev;
    Employee *emp2 = &teach;

    emp1->Work();
    emp2->Work();
}



