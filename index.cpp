#include<iostream>
using namespace std;
int main(){
    int score;
    char grade;
        cout<<"Enter Your Score : ";
        cin>>score;

    if(score > 100){
        cout<<"Enter Your Score out of 100 ";
    }else{
    grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 33) ? 'D' : 'F';
    cout<<"Your grade is "<<grade<<" ";
        switch(grade){
            case 'A':
            cout<<"Excelent Work !"<<" ";
            break;
            case 'B':
            cout<<"Well Done !"<<" ";
            break;
            case 'C':
            cout<<"Good Job !"<<" ";
            break;
            case 'D':
            cout<<"You passed, but you could do better "<<" ";
            break;
            case 'F':
            cout<<"Sorry, You failed !"<<" ";
            break;
        }

        if(grade >= 'A' && grade <= 'D'){
            cout<<"You are eligible for next level"<<" ";
        }else{
            cout<<"Please try again next time ! ";
        }
    }


return 0;
}