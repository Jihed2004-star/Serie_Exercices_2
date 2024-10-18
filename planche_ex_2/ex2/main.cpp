#include <iostream>

using namespace std;
/*passage valeur*/
bool egalepv(int a,int b){
    return (a==b)?true:false;
}
/*passage referance*/
bool egalepr(int& a,int& b){
    return (a==b)?true:false;
}
/*passage adress*/
bool egalepa(int* a,int* b){
    return (*a==*b)?true:false;
}


int main()
{
    int a=5;
    int b=8;
    cout << egalepa(&a,&b) << endl;
    return 0;
}
