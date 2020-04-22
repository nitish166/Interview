#include<bits/stdc++.h>
using namespace std;

class Student{
public:
  string name;
  int roll;
  int totalmarks;
};



// sorting based on marks as well as roll number

bool compare(Student* s1, Student* s2)
{
    // based on marks
    if(s1->totalmarks !=s2->totalmarks)
    {
        return s1->totalmarks > s2->totalmarks;
    }
    // based on roll number
    return s1->roll < s2->roll;
}


int main()
{
  
   int n;
   cin>>n;

   // Student data type are used for declaring 2D array
   Student** students = new Student*[n];
   for(int i=0; i<n; i++)
   {
      students[i] = new Student();
   }

   for(int i=0; i<n; i++)
   {
      cin>>students[i]->name;
      students[i]->roll =i+1;
      int m1, m2, m3;
      cin>>m1>>m2>>m3;

      int total =(m1+m2+m3);
      students[i]->totalmarks = total;
   }

   sort(students, students+n, compare);

   for(int i=0; i<n; i++)
   {
      cout<<(i+1) <<" "<<students[i]->name<<endl;
   }

	 return 0;
} 
