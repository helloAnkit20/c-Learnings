#include<iostream>
using namespace std;

//  pattern problem
// *
// **
// ***

void patternUpperTrianlge(){
    
    int i;
    int n;
    cout<<"Enter a number to form star\n";
    cin>>n;
    for(i=1;i<=n;i++){    
        for(int j=1;j<=i;j++){
            cout<<"*";
    }
    cout<<endl;
    }
   

}




// pattern problem
// ***
// **
// *


void lowerTriangleagain(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
   
}


//  *
//  **
//  ***
//  **
//  *
   


void sideTriangle(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
        for(i=n;i>0;i--){
            for(int j=1;j<i;j++){//j=0 or j=1 both are applicable @
                cout<<"*";
            }
            cout<<endl;
        }
   
    }



// ***
// **
// *

void lowerTriangle(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
    }
        cout<<endl;
    }

   

}


/*
       *       
      ***      
     *****     
    *******    
   *********   
  ***********  
 ************* 
***************
*/


void upperfulltriangle(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }   
    
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
}
    


/*
*********
 ******* 
  *****  
   ***   
    * 
*/


void lowerfulltriangle(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }   
    
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
}


/*
       1
      123
     12345
    1234567
   123456789
  1234567891011  
 12345678910111213
123456789101112131415
*/



void utpattern(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i-1);j++){
            cout<<j;
        }   
    
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
} 

/*
       1       
      222      
     33333     
    4444444    
   555555555   
  66666666666  
 7777777777777 
888888888888888
*/


void ltpattern(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i-1);j++){
            cout<<i;
        }   
    
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
}


/*
  * 
 ***
*****
 *** 
  * 

*/

void tpattern(){
    int i;
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(i=n-1;i>0;i--){
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
        }   
    
        //space
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
   
   
}


/*
****
****
****
****
*/

void nstar(){
    int i;
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
11111
22222
33333
44444
55555
*/

void straightPattern(){
    int i;
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<i;
        }
        cout<<endl;
    }
   
}


/*
12345
12345
12345
12345
12345
*/

void unpattern(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
   
}


/*
55555
44444
33333
22222
11111
*/

void lnpattern(){
    int i;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            cout<<i;
        }
        cout<<endl;
    }
   
}


/*
54321
54321
54321
54321
54321
*/
void revpattern(){
    int i;
    int j;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=n;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
   
}


/*
55555
44444
33333
22222
11111
*/

void revreppattern(){
    int i;
    int j;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        for(j=n;j>0;j--){
            cout<<i;
        }
        cout<<endl;
    }
   
}   


/*
1  2  3  4  5
6  7  8  9  10
11  12  13  14  15
16  17  18  19  20
21  22  23  24  25
*/


void spacepattern(){
    int i;
    int n;
    cin>>n;
    for(i=1;i<=n*n;i++){
        cout<<i<<"  ";
        if(i%5==0){
            cout<<endl;
        }
    }
   
}


/*
1 3 5 7 9 
11 13 15 17 19 
21 23 25 27 29 
31 33 35 37 39 
41 43 45 47 49
*/

void oddpatern(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=1;i<n*10;i++){
         if(i%2!=0){
                cout<<i<<" ";
                if(i%10==9){
                    cout<<endl;
                }
            }
    }    
   
}



/*
2 4 6 8 10 
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50
*/

void evenpattern(){
    int i;
    int j;
    int n;
    cin>>n;
    for(i=1;i<=n*10;i++){
         if(i%2==0){
                cout<<i<<" ";
                if(i%10==0){
                    cout<<endl;
                }
            }
    }    
   
}



/*
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
*/
void tablepattern(){
    int i;
    int j;
    int t=0;
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        t=i;
        for(j=1;j<=n;j++){
            cout<<t<<" ";
            t+=i;
        }
        cout<<endl;
    }
   
}



/*
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
*/

void numberpatern(){
    int i;
    int j;
    int n=5;
    int temp=0;
    //cout<<"enter a number\n";
    //cin>>n;
    for(i=1;i<=n;i++){
        temp = i;
        for(j=1;j<=n;j++){
            cout<<temp<<" ";
            temp+=n;        
        }
        cout<<endl;  
        }
}


/*
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
*/

void verticalnumberpattern(){
    int i;
    int j;
    int x = 0;
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    for(i=1;i<=n;i++){
        x=i;
        for(j=1;j<=n;j++){
            cout<<x<<" ";
            if(j==n){
                cout<<endl;
                x+=i;
            }

            x+=n;
            
        }
    }
}


/*
1 10 11 20 21 
2 9 12 19 22 
3 8 13 18 23 
4 7 14 17 24
5 6 15 16 25
*/

void revverticaltriangle(){
    int i;
    int n;
    int x=0;
    int y=0;
    cout<<"enter a number\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        x=i;
        y=n-i+1;
        for(int j=1;j<=n;j++){
            if(j%2==1){
                cout<<x<<" ";  
            }
            else{
                cout<<y<<" ";
            }
            x+=n;
            y+=n;
        }
        cout<<endl;
    }
}


/*
5 10 15 20 25 
4 9 14 19 24 
3 8 13 18 23 
2 7 12 17 22 
1 6 11 16 21 
*/

void fullrevnumpattern(){
    int i;
    int x=0;
    int n;
    cout<<"enter a number\n";
    cin>>n;
    for(i=n;i>0;i--){
        x=i;
        for(int j=n;j>0;j--){
            cout<<x<<" ";
            if(j==1){
                cout<<endl;
            }
            x+=n;
        }
    }
}
int main(){
    fullrevnumpattern();
   
}
