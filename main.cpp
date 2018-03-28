#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0 ;
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Baconian Cipher
// Last Modification Date : 3/3/2018
// Author1 and ID and Group : 20170085 , G4
// Author2 and ID and Group : 20170098  , G4
// Author3 and ID and Group : 20170081 , G4
// Teaching Assistant:
// Purpose: cipher and decipher text
    vector < pair < char, string > > vec (27) ;
// making pairs to convert each character to a number of characters
    vec[1] = make_pair ('A', "aaaaa");
    vec[2] = make_pair ('B', "aaaab");
    vec[3] = make_pair ('C', "aaaba");
    vec[4] = make_pair ('D', "aaabb");
    vec[5] = make_pair ('E', "aabaa");
    vec[6] = make_pair ('F', "aabab");
    vec[7] = make_pair ('G', "aabba");
    vec[8] = make_pair ('H', "aabbb");
    vec[9] = make_pair ('I', "abaaa");
    vec[10] = make_pair ('J', "abaab");
    vec[11] = make_pair ('K', "ababa");
    vec[12] = make_pair ('L', "ababb");
    vec[13] = make_pair ('M', "abbaa");
    vec[14] = make_pair ('N', "abbab");
    vec[15] = make_pair ('O', "abbba");
    vec[16] = make_pair ('P', "abbbb");
    vec[17] = make_pair ('Q', "baaaa");
    vec[18] = make_pair ('R', "baaab");
    vec[19] = make_pair ('S', "baaba");
    vec[20] = make_pair ('T', "baabb");
    vec[21] = make_pair ('U', "babaa");
    vec[22] = make_pair ('V', "babab");
    vec[23] = make_pair ('W', "babba");
    vec[24] = make_pair ('X', "babbb");
    vec[25] = make_pair ('Y', "bbaaa");
    vec[26] = make_pair ('Z', "bbaab");
//making the user choose what he want
    string x ;
    cout << "1 -Cipher\n2-Decipher\nChoose : " ;

    int decision = 0 ;
    cin >> decision ;
    if (decision == 1)
    {
        cout << "please enter the Text :"; // taking the text from user and convert each character
        cin.ignore () ;
        getline (cin, x ) ;

        for (int i =0 ; i < x.length() ; i++)
            {
                x[i] = toupper(x[i]) ;
                for ( int j=1 ; j<27 ; j++)
                {

                    if ( x[i] == vec[j].first)
                    {

                        cout <<  vec[j].second << " ";
                    }

                }
            }
    }
    if (decision == 2)
    {
        string temp ; // taking the cipher text from the user and decipher it
        cout << "please enter the cipher Text : " ;

        while (cin >> temp)

            for ( int j=1 ; j<27 ; j++)
            {
                if ( temp == vec[j].second)
                    cout << vec[j].first << " ";
            }



    }
    return 0;
}
