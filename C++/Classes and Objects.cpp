
class Student{
   int scores[5],i,total=0;
   public:
   void input(){
       for(i=0;i<5;i++){
           cin>>scores[i];
       }
   }
   int calculateTotalScore(){
       for(i=0;i<5;i++){
           total=total+scores[i];
       }
       return(total);
   }
};
// Write your Student class here

