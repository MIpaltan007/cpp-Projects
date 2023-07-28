#include<bits/stdc++.h>
using namespace std;
void parser(char * string)
{
    int in=0,i; //Variable to track whether we are inside the tag
    int index = 0;
    for ( i = 0; i < strlen(string); i++){
        if(string[i] == '<'){
            in = 1;
            continue;
        }
        else if(string[i]=='>')
        {
            in = 0;
            continue;
        }
        if(in==0){
            string[index] = string[i];
            index ++;
        }
    }
    string[index]='\0';
    while(string[0]==' '){
        for(i=0;i<strlen(string);i++){
            string[i]=string[i+1];
        }
    }
    while(string[strlen(string)-1]==' '){
        string[strlen(string)-1]='\0';
    }
}
int main(){
    char s[]="<h1>    Hello There    </h1>";
    parser(s);
    cout<<""<<s<<endl;
    return 0;

}
