#include<iostream>
class Student{
    private:
        int roll, phyMarks, cheMarks, mathMarks;
        std::string name;
    public:
        Student(int roll, int phyMarks, int cheMarks, int mathMarks, std::string name){
            this->roll = roll;
            this->name = name;
            this->cheMarks = cheMarks;
            this->phyMarks = phyMarks;
            this->mathMarks = mathMarks;
        }
        int total(){
            return mathMarks+phyMarks+cheMarks;
        }
        char grade(){
            float  average = total()/3;
            if(average>60){
                return 'A';
            }
            else if(average>=40 && average<60){
                return 'B';
            }
            else return 'C';
        }


};

int main(){
    int roll;
    std::string name;
    int m,p,c;
    std::cout<<"Enter name of student: "<<std::endl;
    std::cin>>name;
    std::cout<<"Enter roll number of student: "<<std::endl;
    std::cin>>roll;
    std::cout<<"Enter marks of 3 subjects: "<<std::endl;
    std::cin>>m>>p>>c;
    Student s(roll,p,c,m, name);
    std::cout<<"Total marks of the student: "<<s.total()<<std::endl;
    std::cout<<"Grade of the student: "<<s.grade()<<std::endl;
}