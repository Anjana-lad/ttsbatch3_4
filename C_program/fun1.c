//function is a set of instruction which takes some input do computation  on it and produce its output.
// syntax:
/*
    data_type function name(parameter list){  //function declaration
        body of the function
    }

    //call function:-
    function name(parameter list);  // function call;

 function defintion : 
 datatype function_name (parameter list); 


*/

 #include<stdio.h>
  int print();   //function defintion
  //{   //user defined function
//     printf("\n Hello world");
//   }
 int main(){
    print();   //function call
  print();
 }

   int print(){   //user defined function
    printf("\n Hello world");
    int num;
    printf("\n Enter number:");
    scanf("%d",&num);
    num+=20;
    printf("\n Number=%d",num);
  }