#include <iostream>
#include <conio.h>

using namespace std;

#define N 6

int main()
{
    int X, j, i, C[6];
    for (i=0; i<N; i++)
	{
        cout<<"C ["<<i<<"] = ";
        cin>>C[i];
    }

    for (i=0; i<N; i++)
        cout<<C[i]<<" ";
    cout<<endl;

    for (i=0; i<N-1; i++)
        for (j=0; j<N-1-i; j++)
            if (C[j]>C[j+1])
			{
                X = C[j];
                C[j] = C[j+1];
                C[j+1] = X ;
            }
    for (i=0; i<N; i++)
        cout<<C[i]<<" ";
    cout<<endl;

    return 0;
}
