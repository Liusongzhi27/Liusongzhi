    #include "std_lib_facilities.h"

//4. Write a function print_array10(ostream& os, int* a) that prints out the values of a to os.

ostream& print_array10(ostream& os, int* a)
{
    for (int i = 0; i < 10; i++)
        os << a[i] << " ";
    os << endl;
    return os;
}
//7. Write a function print_array(ostream& os, int* a, int n) that prints out the values of a to os.
ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; i++)
        os << a[i] << " ";
    os << endl;
    return os;
}

//10. Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array().
ostream& print_vector(ostream& os, vector<int>& v)
{
    for (int i = 0; i < v.size(); i++)
        os << v[i] << " ";
    os << endl;
    return os;
}


int main()
{
	//1. Allocate an array of ten ints on the free store using new
		int* a = new int[10];


    //2.Print the values of the ten ints to cout.
    	for(int i = 0;i<10;++i)
    		cout << a[i] << " , ";
    	cout << endl ;
    //3.Deallocate the array (using delete[]).
    	delete[] a;
    //5.Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.
    	int* a5 = new int[10];
        int x = 100;
        for (int i = 0; i < 10; ++i)
    {
        a5[i] = x;
        ++x;
    }
  print_array10(cout, a5);
  delete[] a5;
   	//6. Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc. And print out its values.
    int* a6 = new int[11];
    x = 100;
    for (int i = 0; i < 11; ++i)
    {
        a6[i] = x;
        ++x;
        cout << a6[i] << "  ";
    }
    cout << endl;
    delete[] a6;

	//8. Allocate an array of 20 ints on the free store; initialize it with the values 100, 101, 102, etc. and print out its values.

     int* a8 = new int[20];

  for (int i = 0; i < 20; ++i)
{   
        a8[i] = x;
        ++x;
}
  print_array(cout, a8, 20);
  delete[] a8;

// 5.Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc. and print out its values.
//6. Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc. and print out its values.
 vector<int> v5(10);
    int y = 100;
    for (int i = 0; i < 10; ++i)
    {
        v5[i] = y;
        ++y;
    }
    print_vector(cout, v5);

    vector<int> v6(11);
    y = 100;
    for (int i = 0; i < 11; ++i)
    {
        v6[i] = y;
        ++y;
    }
    print_vector(cout, v6);

    vector<int> v8(20);
    y = 100;
    for (int i = 0; i < 20; ++i)
    {
        v8[i] = y;
        ++y;
    }
    print_vector(cout, v8);
    return 0;

}