#include<iostream>
using namespace std;

/*int main()
{
    /*int a;
    cin>>a; //used to take input

    //cout<<"The value of n is : "<<n <<endl;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        cout<<"a is negative"<<endl;
    }

    int a,b;                                  

    //cin>>a >>b;

    //a= cin.get();
    //the input we take in consider as char'' by compiler

    //cout<< "value of a and b is "<<a <<" " <<b <<endl;
    //cout<<" value of a is: "<<a;

    int a,b;

    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    if(a>b){
        cout<<"a is greater than b";
    }
    else{
        cout<<"b ia greater than a";
    }
    int a;
    cout<<"enter the value of a :"<<endl;
    cin>>a;
    if(a>0){
        cout<<"a is positive"<<endl;
    }
    else{
        if(a<0){
            cout<<"a is negative"<<endl;
        }
        else{
            cout<<"a is zero"<<endl;
        }
    }
    else if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is zero"<<endl;
    }

    char ch;
    cout<<"enter the value of ch :"<<endl;

    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"this is lower case"<<endl;
    }
    if(ch>='A' && ch<='Z'){
        cout<<"this is upper case"<<endl;
    }
    else{
        cout<<"this is numeric"<<endl;
    }


}*/

/*int main()
{
    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i=i+1;
    }
    int n;
    cin>>n;
    int i=1;
    int sum = 0;
    while(i<=n){
        sum = sum+i;
        //cout<<sum<<endl;
        i=i+1;
    }
    cout<<sum<<endl;*/


    /*int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"this number is not prime"<<endl;
        }
        else{
            cout<<"it is a prime numberfor"<<i<<endl;
        }
        i=i+1;
    }*/
    
//}

//PATTERN

int main()
{
    /*int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<"*"<<endl;
        i=i+1;
    }*/

    /*int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"j";//replace j by i for another pattern
            //cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    /*int n;
    cin>>n;

    int i;
    i=1;
    int count=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/

    /*int n;
    cin>>n;
    
    int row =1;
    while(row<=n){
        int column =1;
        while(column<=row){
            //cout<<"*";
            cout<<row;
            column=column+1;
        }
        cout<<endl;
        row=row+1;
    }*/

    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int k=i;
        while(j<=i){
            cout<<k;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/

//solve it without using k
   /* int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            
        }
    }*/

    /*int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1;
            j=j+1;+
        }
        cout<<endl;
        i=i+1;
    }*/

    /*cout<<"hello"<<endl;
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int column =1;
        char ch= 'A'+n- row;
        while(column<=row)
        {
            //char ch=('A'+row+column -2);//'a'+row-1;//use column in place of row
            
            cout<<ch;
            ch=ch+1;
            column=column+1;
            
        }
        cout<<endl;
        row=row+1;
    }*/
    
    /*int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        //print space
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //print *
        int j=1;

        while(j<=i)
        {
            cout<<"*";
            j=j+1;
        }
    cout<<endl;
    i=i+1;
    }*/

    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //print space
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space=space-1;
        }
        //print 1 triangle
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j=j+1;
        }
        //print2 triangle
        int start = i-1;
        while(start)
        {
            cout<<start;
            start=start-1;
        }

        cout<<endl;
        i=i+1;
    }
}