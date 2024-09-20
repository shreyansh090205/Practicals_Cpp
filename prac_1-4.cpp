#include <bits/stdc++.h>

using namespace std;
void printPatern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j < (4 - i) || j >= 7 - (4 - i))
            {
                cout << (char)('A' + j);
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void printPatern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // stars
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }

        // spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void printPatern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printPatern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << pow(11, i) << endl;
    }
}
/*Practical 2*/
void pattern_printer()
{
    int n=0;
    cout << "Enter code of patterns: " << endl;
    // 11: 1st pattern using for loop,
    //  12: 1st pattern using while loop,
    //  13: 1st pattern using do while loop,
    //  21: 2nd pattern using for loop
    //  22: 2nd pattern using while loop
    //  23: 2nd pattern using do while loop
    //  31: 3rd pattern using for loop
    //  32: 3rd pattern using while loop
    //  33: 3rd pattern using do while loop
    //  41: 4th pattern using for loop
    //  42: 4th pattern using while loop
    //  43: 4th pattern using do while loop
    cin >> n;
    switch (n)
    {
    case 11:
        printPatern1(5);
        break;

    case 12:
    {
        int i = 0;
        while (i < 5)
        {
        int j = 0;
            while (j < 7)
            {
                if (j < (4 - i) || j >= 7 - (4 - i))
                {
                    cout << (char)('A' + j);
                }
                else
                {
                    cout << " ";
                }
                j++;
            }
            i++;
            cout<<endl;
        }
    }
        break;

    case 13:
        {
        int i = 0;
        do
        {
        int j = 0;
            do
            {
                if (j < (4 - i) || j >= 7 - (4 - i))
                {
                    cout << (char)('A' + j);
                }
                else
                {
                    cout << " ";
                }
                j++;
            }while(j < 7);
            i++;
            cout<<endl;
        }while (i < 5);
    }
        break;

    case  21:
        printPatern2(3);
        break;

    case  22:
    {
        int i =0;
        while (i < 3)
        {
            int j = 0;
            int k = 0;
            //print spaces
            while (j< (2 - i))
            {
                cout<<" ";
                j++;
            }

            while (k<=i)
            {
                cout<<"* ";
                k++;
            }
            

            i++;
            cout<<endl;
        }
        
    }   
    break;
    case  23:
    {
        int i =0;
        do
        {
            int j = -1;
            int k = 0;
            //print spaces
            do
            {
                cout<<" ";
                j++;
            }while (j< (2 - i));

            do
            {
                cout<<"* ";
                k++;
            }while (k<=i);
            
            i++;
            cout<<endl;
        }while (i < 3);
    }   
    break;
    default:
    cout<<"Wrong input"<<endl;
        break;
    }
}
/*Practical 3*/
void printNumberSystem(int n){
      cout << left << setw(10) << "Decimal"<< setw(10) << "Octal"<< setw(10) << "Hexadecimal" << endl;

    for (int i = 0; i <= n; ++i) {
        cout << setw(10) << i << setw(10) << oct << i << setw(10) << hex << i << endl;

        // Reset stream format to decimal for the next iteration
        cout << dec;
    }
 }
/*Practical 4*/
void convertNumberSystem(){
    string inNumSys;
    string outNumSys;
    cout<<"Enter the input number system: ";
    cin>>inNumSys;    
    cout<<"Enter the output number system: ";
    cin>>outNumSys;    
    
    if (inNumSys == "decimal")
    {
        int input = 0;
        cout<<"Enter the value in decimal: "<<endl;
        cin>>dec>>input;

        if (outNumSys == "octal")
        {
            cout<<oct<<input<<endl;
        }

        if (outNumSys == "hex")
        {
            cout<<hex<<input<<endl;
        }
    }
    else if (inNumSys == "octal")
    {
        int input = 0;
        cout<<"Enter the value in octal: "<<endl;
        cin>>oct>>input;

        if (outNumSys == "decimal")
        {
            cout<<dec<<input<<endl;
        }

        if (outNumSys == "hex")
        {
            cout<<hex<<input<<endl;
        }
    }
    else if (inNumSys == "hex")
    {
        int input = 0;
        cout<<"Enter the value in hex: "<<endl;
        cin>>hex>>input;

        if (outNumSys == "decimal")
        {
            cout<<dec<<input<<endl;
        }

        if (outNumSys == "octal")
        {
            cout<<oct<<input<<endl;
        }
    }
    else{
        cout<<"Wrong input: you can choose from 'decimal', 'octal' and 'hex' "<<endl;
    }
    
}
int main()
{
/*Practical 1*/

    // printPatern1(5);
    // printPatern2(3);
    // printPatern3(4);
    // printPatern4(5);

/*Practical 2*/
    // pattern_printer();

/*Practical 3*/
    // printNumberSystem(10);

/*Practical 4*/
    // convertNumberSystem();
    return 0;
}