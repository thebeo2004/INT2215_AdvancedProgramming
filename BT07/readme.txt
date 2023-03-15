1.
&c = 0x1234
&d = 0x5678
    char c = ‘A', d = ‘B';
    char* p1 = &c;
    char* p2 = &d;
    char* p3;
    p3 = &d;

    cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
    //*p3 = B, p3 = 0x5678
    p3 = p1; // -> p3 = &c

    cout << “*p3 = “ << *p3 << “, p3 = “ << p3 << endl;
    //*p3 = A, p3 = 0x1234

    *p1 = *p2; // -> c = d = 'B'


    cout << “*p1 = “ << *p1 << “, p1 = “ << p1 << endl;
    //*p1 = B, p1 = 0x1234

2.
    int *p;
    int i;
    int k;
    i = 4;
    k = i;
    p = &i;
//gan cho i = 5
k = 5; W
*k = 5; W
p = 5; W
*p = 5; R

3. char c = ‘C';
    double *p = &c;
-> Khac kieu bien con tro.

