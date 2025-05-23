/*#include<iostream>
using namespace std;
class person{
    private:
    int age;
    string name;
    float salary;
    string address;
    public:
    inline void setdata(int a,float s)
    {
    cin>>name;
    age=a;
    cin>>address;
    salary=s;

    }

    inline void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"Address:"<<address<<endl;
    }
};
int main()
{
    person p;
    p.setdata(20,2000);
    p.display();
    return 0;
}


#include<iostream>
using namespace std;
void areacalculation(int a,int b)
{
    float height=a;
    float weight=b;
    float area;
    area=0.5*b*a;
    cout<<"Area calculation:"<<area<<endl;
    
}
void areacalculation(float r)
{
    float ra=r;
    float circle;
    circle=3.14*ra*ra;
    cout<<"Area Calculation:"<<circle<<endl;
    
}
void areacalculation(float d,float c)
{
    float base=d;
    float heigh=c;
    float rect;
    rect=base*heigh;
    cout<<"rectangle:"<<rect<<endl;
    
}
int main()
{
    areacalculation(2,3);
    areacalculation(2.3);
areacalculation(2,5);
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
double square(int m,int n=2)
{
    return pow(m,n);
    
    
}

int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"result:"<<square(a)<<endl;
    
    cout<<"result of exponenets:"<<square(a,b);
    return 0;
}


#include<iostream>
using namespace std;
class Time{
    private:
    int hours;
    int minutes;
    public:
    void getdata(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void display()
    {
        cout<<"Hours:"<<hours<<endl;
        cout<<"Minutes:"<<minutes<<endl;
    }
    void sum(Time &t,Time &p)
    {
    minutes=t.minutes+p.minutes;
    hours=minutes%60;
    minutes=minutes%60;
    hours=t.hours+p.hours;
        
    }
};
int main()
{
    Time T1;
    T1.getdata(2,30);
T1.display();
Time T2;
T2.getdata(2,20);
T2.display();
Time T3;
T3.sum(T1,T2);
T3.display();
return 0;
}

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[10][10]; // Assuming max size of 10x10 for simplicity
    int rows;
    int cols;

public:
    // Constructor to initialize matrix dimensions
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        
        // Initialize matrix with zeros
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter matrix elements (" << rows << "x" << cols << "):" << endl;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display matrix
    void display() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to multiply two matrices
    Matrix multiply(Matrix m) {
        if(cols != m.rows) {
            cout << "Multiplication not possible!" << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, m.cols);

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < m.cols; j++) {
                for(int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter dimensions of first matrix (rows columns): ";
    cin >> r1 >> c1;

    cout << "Enter dimensions of second matrix (rows columns): ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if(c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        cout << "Number of columns in first matrix must equal number of rows in second matrix." << endl;
        return 0;
    }

    Matrix mat1(r1, c1);
    Matrix mat2(r2, c2);

    cout << "\nEnter first matrix:" << endl;
    mat1.input();

    cout << "\nEnter second matrix:" << endl;
    mat2.input();

    Matrix result = mat1.multiply(mat2);

    cout << "\nFirst Matrix:" << endl;
    mat1.display();

    cout << "\nSecond Matrix:" << endl;
    mat2.display();

    cout << "\nResultant Matrix (Multiplication):" << endl;
    result.display();

    return 0;
}


#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    string sex;
    int marks[5];
    public:
    void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the gender:";
        cin>>sex;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
        
        
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"gender:"<<sex<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<"Subject:"<<i<<":"<<marks[i]<<endl;
        }
    }
    int calculator()
    {
        int total=0;
        for(int i=0;i<5;i++)
        {
            total+=marks[i];
        }
        return (total/5.0);
    }
    int percentage(){
        int percentage=calculator();
        if(percentage>=70)
        {
            cout<<"Name:"<<name<<endl;
            cout<<"AGE:"<<age<<endl;
            cout<<"gender:"<<sex<<endl;
        }
        return 0;
        
    }
    
};
int main()
{
    int n;
    cout<<"Enter the no of students:";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
    s[i].getdata();
    }
    
for(int i=0;i<n;i++)
{
    s[i].percentage();
}
    return 0;
}

#include<iostream>
using namespace std;
class fact{
    private:
    double factorial;
    int n;
    public:
    fact(int no)
    {
        n=no;
        factorial=1;
        for(int i=1;i<=n;i++)
        {
            factorial*=i;
        }
        cout<<"factorial:"<<factorial;
    }
};
int main()
{
    fact f(5);
    return 0;
}

#include<iostream>
using namespace std;
class complex{
    private:
    float image;
    float real;
    public:
    complex()
    {
        image=0;
        real=0;
    }
    complex(float i)
    {
        image=i;
        real=i;
    }
    complex(float r,float im)
    {
        image=im;
        real=r;
    }
    complex sum(complex t1)
    {
        complex w;
        w.real=t1.real+real;
        w.image=t1.image+image;
        return w;
    }
    
void display()
{
    cout<<real<<"+"<<image<<"j"<<endl;
}
};
int main()
{
    complex a;
    complex c(2);
    c.display();
    complex d(2,4);
    d.display();
    complex e;
    e=d.sum(c);
    e.display();
    return 0;
    
}

#include <iostream>
using namespace std;

class Fibonacci {
    int n;
    int series[100]; // Using fixed-size array (assuming max 100 terms)

public:
     Constructor to generate the series
    Fibonacci(int num) {
        n = num;
        series[0] = 0;
        if (n > 1) {
            series[1] = 1;
            for (int i = 2; i < n; i++) {
                series[i] = series[i-1] + series[i-2];
            }
        }
    }

    // Copy constructor
    Fibonacci(const Fibonacci &f) {
        n = f.n;
        for (int i = 0; i < n; i++) {
            series[i] = f.series[i];
        }
    }

    // Display function
    void display() {
        cout << "Fibonacci Series (first " << n << " terms): ";
        for (int i = 0; i < n; i++) {
            cout << series[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int terms;
    cout << "Enter number of terms for Fibonacci series (max 100): ";
    cin >> terms;

    if (terms > 100) {
        cout << "Maximum limit is 100 terms." << endl;
        return 1;
    }

    // Create original object
    Fibonacci fib1(terms);
    fib1.display();

    // Create a copy using copy constructor
    Fibonacci fib2 = fib1;
    cout << "\nCopy of the Fibonacci series:\n";
    fib2.display();

    return 0;
}
/*
#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b, c;

public:
    void getData() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }

    // Friend function declaration
    friend void findGreatest(Numbers n);
};

// Friend function definition
void findGreatest(Numbers n) {
    int max;

    if (n.a >= n.b && n.a >= n.c)
        max = n.a;
    else if (n.b >= n.a && n.b >= n.c)
        max = n.b;
    else
        max = n.c;

    cout << "The greatest number is: " << max << endl;
}

int main() {
    Numbers num;
    num.getData();
    findGreatest(num);
    return 0;
}

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Inline constructor with assignment
    Number(int val) : value(val) {}

    // Inline display function
    void display() { cout << "Value: " << value << endl; }

    // Friend function declaration (will be defined outside class)
    friend void addFive(Number &num);
};

// Friend function definition with inline assignment
inline void addFive(Number &num) {
    num.value += 5;  // Accessing private member directly
}

int main() {
    // Inline object creation and assignment
    Number num(10);

    cout << "Before friend function:" << endl;
    num.display();

    // Calling friend function
    addFive(num);

    cout << "\nAfter friend function:" << endl;
    num.display();

    return 0;
}
#include<iostream>
using namespace std;
class xyz;
class abc{
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the value of A:";
        cin>>a;
    }
    friend int max(xyz &,abc &);
};
class xyz{
    private:
    int b;
    public:
    void setdata()
    {
        cout<<"enter the value of B:"<<endl;
        cin>>b;
    }
    friend int max(xyz &,abc &);
};
int max(xyz &x,abc &c)
{
    if(x.b>c.a)
    {
        cout<<"the greatest value is:"<<x.b<<endl;
    }
    else{
        cout<<"The greatest value is:"<<c.a<<endl;
    }
    return 0;
    
}
int main()
{
    abc f;
    f.getdata();
    xyz y;
    y.setdata();
    max(y,f);
}
#include <iostream>
using namespace std;

// Forward declaration of class Sum
class Sum;

class Numbers {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // Declare Sum class as friend
    friend class Sum;
};

class Sum {
public:
    void display(Numbers n) {
        int result = n.a + n.b;
        cout << "First number: " << n.a << endl;
        cout << "Second number: " << n.b << endl;
        cout << "Sum: " << result << endl;
    }
};

int main() {
    Numbers num;
    Sum s;

    num.getData();
    s.display(num);

    return 0;
}
    */















