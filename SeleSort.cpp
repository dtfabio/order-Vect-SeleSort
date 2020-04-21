14.#include <iostream>
using namespace std;

void scambio(int& a, int& b)
{
     int app;
     app=a;
     a=b;
     b=app;
}
int main()
{
    int v[10]={40,120,56,2,32,33,38,52,21,18};
    int k,j,pos,minimo;
    bool flag=false;

    for(k=0;k<9;k++)
    {
            minimo=v[k];
            flag=false;
            for(j=k+1;j<10;j++)
                    {
                                       if(v[j]<minimo)
                                       {
                                                   pos=j;
                                                   minimo=v[j];
                                                   flag=true;
                                       }
                    }
                    if(flag==true)
                      scambio(v[k],v[pos]);
    }


    for(k=0;k<10;k++)
    cout<<v[k]<<endl;
system("pause");

}
