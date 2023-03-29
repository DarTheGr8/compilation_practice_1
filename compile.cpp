#include <iostream>
using namespace std;

//double the elements--not official function call
void array_double()
{    //declare array
    cout << "\n*****Double the integers of each element*****\n";
    const int array_size=3;
    int array1[array_size]={4,5,6};

    for (int i=0; i<array_size; i++)
    {
        array1[i]=array1[i]*2;
        cout <<array1[i];

    }
}
//array to display all elements in an array--not official function call
void array_display()
{
    //display elements
    cout << "\n*****Display each element in the array*****\n";
    int const array_size=12;
    char array_display[]= "hello there";
    for (int i=0; array_display[i]!='\0'; i++)
    {
        cout << array_display[i];
    }
}
//Display each element in the array--not official function call
void array_input()
{   //recive input fromuser and display to user using an array of 20 elements
    // const array_size=20;
        cout << "\n*****receive input of an array*****\n";
    const int array_size=20;
    char array_1[array_size]={};
    cout << "Enter a text preferabl hello world"<< endl;
    cin >>  array_1;
    int index=0;
//loop until you reach the null character which will signify youve reached the end of the array
//index is accessing the specific index in the array
    for ( index; array_1[index]!='\0'; index++)
    {
        cout << array_1[index] << endl;        
    }
}
//class work 1--not official function call
void class_work1()
{
//write name and print all vowels in name
    cout << "\n*****print out the vowels ind darwyne*****\n";
//decalre array
    char array_work1[]="darwyne";
//loop thorugh entire array until get to null character which will signify the end.
//all loops need a terminating condition
    for (int index=0; array_work1[index]!='\0'; index++)
    {
//use or operator to list types of vowels
        if(array_work1[index]=='a'||array_work1[index]=='e'||array_work1[index]=='i'||array_work1[index]=='o'||array_work1[index]=='u')
        {
            cout << array_work1[index]<<endl;
        }               
    }
}
//proper way to do functions(refresher)"function_1 prototype"
int sumoftwonumbers(int, int);
//function_2 prototype
void array_function_2();
//syntax for passing arguements to functions array_function_2
//function takes an array as an arguement
void modifyarray(int a [],int );
//passing an element in array
void modifyarrayelement(int);
//return index of a number passed. 
int IndexOf(int[], int, int);
//Find maximum in the list of arrays provided
int FindMaxValue(int[], int);


//*******************************************
int main ()
{
//uncomment the function inside main and run to see the execution :)
// declaration
    int num1, num2;
//**********************************************
    cout << "**This is my practice arrays for programming || ENJOY!!*** \n";
    cout << "** might be a bit confusing **\n\n\n";

// declare function call for array double*******
    // array_double();
    // array_display();
    // array_input();
    // class_work1();

//function_1 call for function prototype
    // cout << "enter 2 numbers";
    // cin >> num1;
    // cin >> num2;
    // cout << sumoftwonumbers(num1, num2);
//this is the only time you will not use brackets when calling a array function in main

    const int arraysize =5;//array a size
    int a[arraysize]={0,1,2,3,4};//initialize array a

    modifyarray(a, arraysize);
    // modifyarrayelement(a[4]);

//return index of the first instance of a number passed. 
//return -1 if the number passed in the array is not listed in arrray

    // int arraysize1= 10;
    // int list[arraysize1]={42,7,-9,14,8,39,42,8,19,0};
    // int n1=8;
    // int n2=342;
 
    // int FindMax[arraysize2]={4,35,3,3,576,9};
    // cout << FindMaxValue(FindMax, arraysize2);
//** array and array const have been im,ported in main

    return 0;
}
//*******************************************

//function_1
int sumoftwonumbers(int a, int b)

{   int result = a+b;
    return result;
}

void array_function_2()
{
//this is mainly notes from class

//this is the only time you will not use brackets when calling a array function in main
//to pass array to a function we specify array anme w/o brackets
    //this is class notes
        
    //an array is declared as
     // array-   int hourlytemperature[24];

     //the function call
     //function- modifyArray(hourlytemperature, 24);
     //this passes the array "hourlytemperature" and its size to function "modifyArray"

     //pg 67 first ppt slide
}

void modifyarray(int b[],int arraysize)
        {
        //output original array
        for(int k=0;k<arraysize;k++)
        { 
            b[k]*=2;
            cout << b[k];
        }
        }

void modifyarrayelement(int b)
{
        b = b*2;
        cout <<"this is 4*2: " << b;
}

int IndexOf(int list[], int SV, int arraysize)
{
int value=-1;
for (int i=0; i<arraysize; i++)
{  
  if(list[i]==SV)
    {value=i;
    break;
     }   
  
}
return value;
}

int FindMaxValue( int FindMax[], int arraysize2)
{
  int largestval=0;

for (int i=0; i<arraysize2; i++)
{
  if(FindMax[i]>largestval)
  {
    largestval=FindMax[i];
  }
}
  return largestval;
}