#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    //const  size_t three = 5;
    const size_t one = 5;
    
    int arr1[one], arr2[one];
    int arr3[one];

    for (int i = 0; i < one; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
        arr3[i] = arr1[i] + arr2[i];
    }
    cout << "1st\t2nd\t3\n\n";
    for (int i = 0; i < one; i++) {
        cout << arr1[i] << "\t" << arr2[i] <<"\t" << arr3[i] << endl;
    }

}


