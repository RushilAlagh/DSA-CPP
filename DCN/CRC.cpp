#include<iostream>
using namespace std;

// XOR operation function
string XOR(string databits, string polynomial) {
    string result = "";
    int n = polynomial.size();
    
    // Perform XOR between databits and polynomial
    for (int i = 0; i < n; i++) {
        if (databits[i] == polynomial[i]) 
            result += '0';
        else 
            result += '1';
    }
    cout << "XOR result: " << result << endl;

    // Remove leading zeros from the result
    string newresult = "";
    int i = 0;
    while (i < n && result[i] == '0') {
        i++;
    }
    while (i < n) {
        newresult += result[i];
        i++;
    }

    cout << "XOR new result: " << newresult << endl;
    return newresult;
}

int main() {
    string databits, polynomial;
cout<<"hello"<<endl;
    // Input the data stream and the polynomial
    cout << "Enter the data stream: ";
    cin >> databits;

    cout << "Enter the polynomial: ";
    cin >> polynomial;

    int m = databits.size();
    int n = polynomial.size();
    
    // Append (n-1) zeros to the databits
    string augmentedData = databits + string(n - 1, '0');
    string newresult = XOR(augmentedData, polynomial);
    
    // Perform XOR division to calculate the remainder
    for (int i = n; i < m + n - 1;) {
        // Add bits to the remainder until it matches the size of the polynomial
        while (newresult.size() < n && i < m + n - 1) {
            newresult += augmentedData[i];
            i++;
        }
        
        cout << "XOR new result after adding bits: " << newresult << endl;
        
        // Perform XOR division if the newresult size is at least polynomial size
        if (newresult.size() >= n) {
            newresult = XOR(newresult, polynomial);
        }
    }
    
    // The remainder is the redundant bits to be appended to the original data
    string codeword = databits;
    cout << "Final remainder: " << newresult << endl;
for(int i=0;i<3-newresult.size();i++){
codeword += '0';
}
    // Form the transmitted codeword (original data + remainder)
    codeword += newresult;
    cout << "Transmitted data with CRC (codeword): " << codeword << endl;

    // Simulate receiver checking the codeword
    string receivedCodeword = codeword; // Assume codeword is received
    string checkResult = XOR(receivedCodeword, polynomial);
    
    // Perform XOR division on received codeword
    for (int i = n; i < m + n - 1;) {
        while (checkResult.size() < n && i < m + n - 1) {
            checkResult += receivedCodeword[i];
            i++;
        }
        
        cout << "Receiver XOR new result after adding bits: " << checkResult << endl;
        
        if (checkResult.size() >= n) {
            checkResult = XOR(checkResult, polynomial);
        }
    }
    
    // Check if the remainder is all zeroes
    if (checkResult.size()==0) {
        cout << "No errors detected in the received data!" << endl;
    } else {
        cout << "Error detected in the received data!" << endl;
    }

    return 0;
}