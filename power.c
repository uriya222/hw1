#define EXP 2.718281
double Exp(int x);
double Pow(double x , int y) ;
double Exp(int x){
   return Pow(EXP,x);
}
double Pow(double x , int y){
   double outcome=1;
   int i=0,abs=0;
   if(y>=0){
     for ( i = 0; i < y; i++)
     {
         outcome*=x;
     }
     return outcome;
   }
   else{
     abs=-y;
     for ( i = 0; i < abs; i++)
     {
         outcome*=x;
     }
     return 1/outcome;
   }
}