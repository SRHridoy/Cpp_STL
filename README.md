># C++ STL :

>## Vector : 

It is a dynamic sized array. Number of elements can be increased or decreased.


```cpp
vector<int>v;//The size of the vector is zero...
cout << v.size();//0
```

```cpp
vector<int>v(10);// The size of the vector is 10 and all the elements will be initialized with 0's...
```

```cpp
vector<int>v(10, 5);// The size will be 10 and all will be initalized with 5's...
```

```cpp
vector<int>v = {5,1,4,3};
```

```cpp
vector<int>v[10];// This is an array of 10 vectors...
```

```cpp
v.push_back(x); // Insert the value of x to the end of the vector.O(1)..
v.pop_back(); // Erase the last element. O(1)
v.clear(); // Erase all the elements. O(n)
v.size(); // Return the current size of the vector. O(1)

```

>Sort():

Used to sort an array or a vector or a string.
The underlying sorting algorithm is called the gcc_sort and it's hybrid(Quick, Heap and Insertion sort) and very efficient. O(NlogN)

```cpp
sort(ptr to 1st_element, ptr to last_element + 1);
```

For Array : 
```cpp
sort(arr,arr+n);
```

```cpp
int a[4] = {5, 4, 1, 2};
sort(a,a+3);// 1, 4, 5, 2
```

```cpp
vector<int>v = {3,2,2,0};
sort(v.begin(), v.end());
```

>## Pairs : 


In case, we want to return multiple values from a function we can use it...


```cpp
pair<int,int>p;//a pair of 2 ints
```

```cpp
pair<int,string>p; // a pair of an int and a string
```

```cpp
pair<int,pair<int,string>>p; // a pair of int and (pair of int and a string)
```

```cpp
pair<vector<int>, string>p; // a pair of a (vector of int) and a string
```

### Accessing Elements using <i>.first</i> and <i>.second</i> :  
```cpp
cout << p.first << " " << p.second << endl;
```

### Returning multiple values :
```cpp
pair<int,int>f(){
    return {3, 5};
}
```

> Sorting arrays/vectors of Pairs(Very Useful):

```cpp
pair<int,int> p[5];//an array of 5 pairs
p[0] = {1,2};
p[1] = {5,2};
p[2] = {8,1};
p[3] = {1,0};
p[4] = {3,4};
```

```cpp
sort(p, p+5);
// [{1,0},{1,2},{3,4},{5,2},{8,1}]
//Sorting is done according to the "first" element but when the first two element ties then ties are broken by comparing second...
```

```cpp
vector<pair<int,string>>v = {{90,"Hridoy"}, {54,"Nova"},{90,"Elina"}, {80, "Omar"}};

sort(v.begin(),v.end());/*
54 Nova
80 Omar
90 Elina
90 Hridoy
*/
```

>NOTE: v.end() is the iterator after the last element.

## Iterators :

Iterators are a lot like pointers.

Vector Iterator : 
```cpp
vector<int>v = {10, 15, 12, 5, 20};

// vector<int>::iterator it = v.begin();
//In sort we can use : 
auto it = v.begin();
cout << *it;//10
it++;
cout << *it;//15
i--;
cout << *it;//10
cout << *(it + 3);//5
```
Array Pointer :
```cpp
int a[5] = {10, 15, 12, 5, 20};

int *p = a;
cout << *p;//10
p++;
cout << *p;//15
p--;
cout << *p; // 10
cout <<*(p + 3); // 5
``` 