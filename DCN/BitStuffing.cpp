#include <iostream>
#include <vector>
using namespace std;

void bitStuff(vector<char> &dataBits)
{
    int Counter = 0;
    for (int i = 0; i < dataBits.size(); i++)
    {
        if (dataBits[i] == '1')
        {
            Counter++;
            if (Counter == 5 && (i+1)<dataBits.size()&&dataBits[i+1]=='1')
            {
                dataBits.insert(dataBits.begin() + i + 1, '$');
                Counter = 0; 
                i++; 
            }
        }
        else
        {
            Counter = 0; 
        }
    }
}

void deStuff(vector<char> &dataBits)
{
    int oneCount = 0;
    for (int i = 0; i < dataBits.size(); i++)
    {
        if (dataBits[i] == '1')
        {
            oneCount++;
            if (oneCount == 5 && (i + 1) < dataBits.size() && dataBits[i + 1] == '$')
            {
                
                dataBits.erase(dataBits.begin() + i + 1);
                oneCount = 0; 
                i--; 
            }
        }
        else
        {
            oneCount = 0; 
        }
    }
}

int main()
{
    vector<char> dataBits;
    string data;
    cout << "Enter the data -> ";
    cin >> data;
    for (char ch : data)
    {
        dataBits.push_back(ch);
    }

    cout << "Entered Data -> " << endl;
    for (char ch : dataBits)
    {
        cout << ch << " ";
    }
    cout << endl;

    bitStuff(dataBits);

    cout << "After Stuffing -> ";
    for (char ch : dataBits)
    {
        cout << ch << " ";
    }
    cout << endl;

    deStuff(dataBits);

    cout << "After Destuffing -> ";
    for (char ch : dataBits)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}