/* the proplem analysis:
inputs : student's assingment, midterm, and final marks
outputs: total mark(in one decimal place) and the word "Pass" or "Fail" 
process: 
    1. declare double varianles for assignment, midterm, final marks, and total mark)
    2. define the fixed value of the passing mark = 50
    3. print prompt and read the three marks from the user
    4.calculate the weighted sum of the three marks  and assigned to the total mark 
    5.compare it with the passing mark and decide wether the student has passed or failed
    6. print the total and either "Pass" or "Fail"
*/ 
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int passMark = 50;
    double assignment,midTerm,finalTerm, total;
    double assi_percentage,mid_percentage,final_percentage;
    cout << "enter assignment result ";
    cin >> assignment;
    cout<< "enter mid term result ";
    cin >> midTerm;
    cout << "enter final term result ";
    cin >> finalTerm;
    assi_percentage= assignment*0.2;
    mid_percentage= midTerm*0.3;
    final_percentage= finalTerm*0.5;
    total = assi_percentage+mid_percentage+final_percentage;
    cout <<"total result out of 100% would be: "<< fixed<<setprecision(1)<<total<<endl;
    (total>passMark)?cout<<"Pass":cout<<"Fail"<<endl;
    return 0;

}