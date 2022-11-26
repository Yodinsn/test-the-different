// #include <stdio.h>、#include <iostream>、#include <string>、#include <algorithm>、#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int password=1234;
	int input=0;
	int c1=0;
	int c2=3;
	int limit=false;
	
	while(password!=input && !limit){
	    c1++;
	    if(c1<=c2){
	        cin>>input;
 	   }
 	   else{
 	       limit=true;
	    }
	}
	if(limit){
	    cout<<"7414"<<endl;
	}
	else{
	    cout<<"success"<<endl;
	}


    return 0;

}