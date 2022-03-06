#include <stdio.h>
void printarray(int Ary[], int n) // ary and n is the argument and n = 9
{
    for (int i = 0; i < n; i++) // loop run 8 times
    {
        printf("%d ", Ary[i]); // 8 value's are print
    }
} // now go to the main function
int partion(int Ary[], int low, int high) // array, 0, 8 
{
    int pivot = Ary[low]; // pivot = 90 // pivot=30
    int i = low; // i = 0 // i=0
    int j = high; // j = 8 // j=5
    int temp; // temprory variable
    do // run 1st time the loop //for 2nd time |30|65|25|11|57|42|
    {
        while (Ary[i] <= pivot) //[0]90 <= 90, [1]188 <= 90(false)// ->[1]65 <= 90,[2]117 <= 90(false) //[2] 25<90,[3]11<90,[4]57<90,[5]42<90,[6]30<90,[7]117<90(false)
        {  //[0]30<=30,[1]65<30(false) //[1]11<30,[2]25<30,[3]65<30(false)
                          
            i++; //i=1//i=2//i =7//i=1//i=3
        }
        while (Ary[j] > pivot) // [8]65 > 90(false) //->[8]188 > 90,[7] 25 > 90(false) //[7]117>90, [6]30>90(false){j = 30(stop)}
        { //[5]42>30,[4]57>30,[3]11>30(false) //[3]65>30,[2]25>30(false)                      
            j--; //8//7//6// 3//2
        }
        if (i < j) // 1 < 8 // 2<7 // 7 < 6(false){go outside the loop}
        {          // 1<3 //3<2(false){outside the loop}
            temp = Ary[i]; //temp = 188//temp=117// temp= 65//
            Ary[i] = Ary[j]; // ary[i] = 65 // ary[i] = 25// ary[i]=11
            Ary[j] = temp; // ary[j] = 188 // ary[j] = 117// ary[j]=65
        } // |90|*65|117|11|57|42|30|25|188*|, // |90|65|*25|11|57|42|30|*117|188| //|30|*11|25|*65|57|42|
    } while (i < j); // 1<8 // 2<7 //1<3 //

    temp = Ary[low]; // now, temp = 90 //temp=30
    Ary[low] = Ary[j]; // ary[low] = 30//ary[low]=25
    Ary[j] = temp; //ary[j] = 90//ary[j]=30
    return j; // j = 6(return) , // |*30|65|25|11|57|42|*90|117|188|
}//j= 2(return)|*25|11|*30|65|57|42|
void quickSort(int Ary[], int low, int high) // array, 0, 8 {(9-1)which is = 8} //array, 0, 5 {(6-1)which is = 5}
{
    int partionindex; //store the index and pivot value of the array
    if (low < high) // 0 < 8 // 0<5
    { // | recursive function , now call the partion function and store the value of partion function in partionindex variable 
        partionindex = partion(Ary, low, high);//ary,0,8 // we get j=6(return) partionindex=6 //ary,0,5
        quickSort(Ary, low, partionindex - 1);  //left sub array //array,0,5
        quickSort(Ary, partionindex + 1, high); //right sub array
    }
}
int main()
{
    printf("printing the array \n");
    int Ary[9] = {90,188,117,11,57,42,30,25,65}; //Ary[0] = 90, Ary[8] = 11
    int n = 9; // n for printing purpose
    printarray(Ary, n); //call the function , let's go to the printarray function!! arguments is array and size of the array
    quickSort(Ary, 0, n - 1); // calling the quickSort function
    printf("\n");
    printarray(Ary, n);
    return 0;
}
